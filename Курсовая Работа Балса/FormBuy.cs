using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using MySql.Data.MySqlClient;

namespace Aeroflot
{
    public partial class FormBuy : Form
    {
        public FormBuy(string flight_number)
        {
            InitializeComponent();
            LoadData(flight_number);
        }

        private void LoadData(string flight_number_value)
        {
            MySqlConnection connection = new MySqlConnection("server=localhost;port=3306;username=root;password=root;database=flightdb");

            connection.Open();

            string query = "SELECT Tickets, Price FROM flight WHERE Flight_number = @fn";

            MySqlCommand command = new MySqlCommand(query, connection);
            command.Parameters.Add("@fn", MySqlDbType.VarChar).Value = flight_number_value;

            MySqlDataReader reader = command.ExecuteReader();

            string data = "";
            string price = "";

            if (reader.Read()) 
            {
                data = reader[0].ToString();
                price = reader[1].ToString();
            }
            

            label7.Text = flight_number_value;
            label8.Text = data;
            label10.Text = price;   
            label11.Text = "Сумма заказа: ";

            reader.Close();
            connection.Close();
        }
        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar >= '0' && e.KeyChar <= '9')
            {
                return;
            }
            if (e.KeyChar == (char)Keys.Back || e.KeyChar == (char)Keys.Delete)
            {
                return;
            }
            e.Handled = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.Length != 4)
            {
                MessageBox.Show("Серия паспорта должна состоять из 4 цифр", "ОШИБКА!");
                return;
            }
            if (textBox2.Text.Length != 6)
            {
                MessageBox.Show("Номер паспорта должен состоять из 6 цифр", "ОШИБКА!");
                return;
            }
            if (textBox3.Text.Length == 0)
            {
                MessageBox.Show("Введите количество билетов", "ОШИБКА!");
                return;
            }
            if (Int32.Parse(textBox3.Text) == 0)
            {
                MessageBox.Show("Минимальное число билетов для покупки: 1", "ОШИБКА!");
                return;
            }
            if(Int32.Parse(textBox3.Text) > (Int32.Parse(label8.Text)))
            {
                MessageBox.Show("Максимальное число билетов на этот рейс доступных для покупки " + label8.Text, "ОШИБКА!");
                return;
            }
            if (textBox4.Text.Length != 16)
            {
                MessageBox.Show("Номер банковской карты должен состоять из 16 цифр!", "ОШИБКА!");
                return;
            }
            if (textBox5.Text.Length != 3)
            {
                MessageBox.Show("CVC код банковской карты должен состоять из 3 цифр!", "ОШИБКА!");
                return;
            }
            else
            {
                buy_ticket();
            }
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            if(textBox3.Text.Length != 0)
            {
                label11.Text = "Сумма заказа: " + (Int32.Parse(label10.Text) * Int32.Parse(textBox3.Text)).ToString();
            }
            else
            {
                label11.Text = "Сумма заказа: ";
            }
        }

        private void buy_ticket()
        {
            MySqlConnection connection = new MySqlConnection("server=localhost;port=3306;username=root;password=root;database=flightdb");

            connection.Open();

            string query = "UPDATE flight SET Tickets = @tv WHERE Flight_number = @fn";


            MySqlCommand command = new MySqlCommand(query, connection);
            command.Parameters.Add("@fn", MySqlDbType.VarChar).Value = label7.Text;
            command.Parameters.Add("@tv", MySqlDbType.VarChar).Value = (Int32.Parse(label8.Text)- Int32.Parse(textBox3.Text)).ToString();

            if(command.ExecuteNonQuery() == 1)
            {
                MessageBox.Show("Спасибо за покупку.\nЗабрать свои билеты вы можете на кассах аэрофлота.\nВозьмите с собой паспорт", "Покупка завершена");
                label8.Text = (Int32.Parse(label8.Text) - Int32.Parse(textBox3.Text)).ToString();
            }
            else
            {
                MessageBox.Show("Что-то пошло не так!", "ОШИБКА");
            }

            connection.Close();
        }
    }
}
