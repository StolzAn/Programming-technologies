using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using MySql.Data.MySqlClient;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ProgressBar;

namespace Aeroflot
{
    public partial class FormList : Form
    {
        public FormList(string departure, string arrival, string date, int Is_checked) //Получаем необходимые данные для работы с Базой 
        {
            InitializeComponent();

            LoadData(departure, arrival, date, Is_checked); //Подгружаем все данные из базы
        }

        private void LoadData(string departure, string arrival, string date, int Is_checked)
        {
            MySqlConnection connection = new MySqlConnection("server=localhost;port=3306;username=root;password=root;database=flightdb"); //Прописываем, с какой базой работаем

            connection.Open(); //Подключаемся

            string query = "SELECT * FROM flight ORDER BY Departure_time"; // SQL комманда

            MySqlCommand command = new MySqlCommand(query, connection); // Активируем команду

            MySqlDataReader reader = command.ExecuteReader(); // Комманда вывод консоли SQL

            List<string[]> data = new List<string[]>(); //Создаём массив данных

            if (Is_checked == 0) // Пользователь не нажал "Без пересадок"
            {
                dataGridView1.Dock = DockStyle.Top; //Таблица с рейсами
                int count = 0;
                while (reader.Read()) //Начинаем считывание из консоли SQL
                {
                    data.Add(new string[9]); // Определяем добавляем в массив 9 колонок

                    if ((DateTime.Parse(reader[1].ToString()).ToShortDateString() == date) //Если совпадает дата вылета и дата выбранная пользователем
                        && (DateTime.Parse(DateTime.Parse(reader[2].ToString()).ToShortTimeString()) > DateTime.Parse(DateTime.Now.ToShortTimeString())) //Если время вылета больше времени сейчас(самолёт ещё не улетел)
                        && (reader[4].ToString() == departure) && (reader[5].ToString() == arrival) //совпадают города вылета и прибытия
                        && reader[8].ToString() != "0") //Количество билетов != 0
                    {
                        count++;
                        if (reader[6].ToString() == "0")
                        {
                            data[data.Count - 1][0] = reader[0].ToString(); //Начинаем заполнять. data[data.Count - 1] - data.Count - количество строк. С каждым проходом while data.Count увеличивается на 1
                            data[data.Count - 1][1] = reader[1].ToString();
                            data[data.Count - 1][1] = DateTime.Parse(data[data.Count - 1][1]).ToShortDateString();
                            data[data.Count - 1][2] = reader[2].ToString();
                            data[data.Count - 1][2] = DateTime.Parse(data[data.Count - 1][2]).ToShortTimeString();
                            data[data.Count - 1][3] = reader[3].ToString();
                            if(DateTime.Today > DateTime.Parse(data[data.Count - 1][3])) //Если дата прибытия не совпадает с датой вылета, выводить и дату и время
                            {
                                data[data.Count - 1][3] = DateTime.Parse(data[data.Count - 1][3]).ToShortDateString() + " " + DateTime.Parse(data[data.Count - 1][3]).ToShortTimeString();
                            }
                            else //Иначе - только время
                            {
                                data[data.Count - 1][3] = DateTime.Parse(data[data.Count - 1][3]).ToShortTimeString();
                            }
                            data[data.Count - 1][4] = reader[4].ToString();
                            data[data.Count - 1][5] = reader[5].ToString();
                            data[data.Count - 1][6] = "Нет";
                            data[data.Count - 1][7] = reader[8].ToString();
                            data[data.Count - 1][8] = reader[9].ToString();
                        }
                        else
                        {
                            data[data.Count - 1][0] = reader[0].ToString();
                            data[data.Count - 1][1] = reader[1].ToString();
                            data[data.Count - 1][1] = DateTime.Parse(data[data.Count - 1][1]).ToShortDateString();
                            data[data.Count - 1][2] = reader[2].ToString();
                            data[data.Count - 1][2] = DateTime.Parse(data[data.Count - 1][2]).ToShortTimeString();
                            data[data.Count - 1][3] = reader[3].ToString();
                            if (DateTime.Today > DateTime.Parse(data[data.Count - 1][3])) //Если дата прибытия не совпадает с датой вылета, выводить и дату и время
                            {
                                data[data.Count - 1][3] = DateTime.Parse(data[data.Count - 1][3]).ToShortDateString() + DateTime.Parse(data[data.Count - 1][3]).ToShortTimeString();
                            }
                            else //Иначе - только время
                            {
                                data[data.Count - 1][3] = DateTime.Parse(data[data.Count - 1][3]).ToShortTimeString();
                            }
                            data[data.Count - 1][4] = reader[4].ToString();
                            data[data.Count - 1][5] = reader[5].ToString();
                            data[data.Count - 1][6] = reader[7].ToString();
                            data[data.Count - 1][7] = reader[8].ToString();
                            data[data.Count - 1][8] = reader[9].ToString();
                        }
                    }
                }

                if (count == 0)
                {
                    label1.Text = "Ничего нет( \n К сожалению по выбранному вами маршруту в этот день нет рейсов без пересадок или все билеты распроданы";
                    label1.Visible = true;
                    label1.Dock = DockStyle.Fill;

                    flowLayoutPanel1.Visible = false;
                }
                else
                {
                    foreach (string[] s in data)
                    {
                        if (s[1]!=null) //Исключаем добавление пустых строк. Пустые строки появляются, когда мы делаем data.Add(new string[9]);
                        {
                            dataGridView1.Rows.Add(s); //В dataGridView1 добавляем всё из строки s массива data.
                        }
                    }
                }
            }
            else
            {
                dataGridView1.Dock = DockStyle.Top;
                int count = 0;
                while (reader.Read())
                {
                    data.Add(new string[8]);

                    if ((reader[6].ToString() == "0") //Рейс без пересадок
                        &&(DateTime.Parse(reader[1].ToString()).ToShortDateString() == date) //Дата вылета совпадает с датой выбранной пользователем
                        && (DateTime.Parse(DateTime.Parse(reader[2].ToString()).ToShortTimeString()) >  DateTime.Parse(DateTime.Now.ToShortTimeString())) //Если время вылета больше времени сейчас(самолёт ещё не улетел)
                        && (reader[4].ToString() == departure) && (reader[5].ToString() == arrival) //совпадают города вылета и прибытия
                        && reader[8].ToString() != "0")//Количество билетов != 0
                    {
                        count++;
                        data[data.Count - 1][0] = reader[0].ToString();
                        data[data.Count - 1][1] = reader[1].ToString();
                        data[data.Count - 1][1] = DateTime.Parse(data[data.Count - 1][1]).ToShortDateString();
                        data[data.Count - 1][2] = reader[2].ToString();
                        data[data.Count - 1][2] = DateTime.Parse(data[data.Count - 1][2]).ToShortTimeString();
                        data[data.Count - 1][3] = reader[3].ToString();
                        if (DateTime.Today > DateTime.Parse(data[data.Count - 1][3])) //Если дата прибытия не совпадает с датой вылета, выводить и дату и время
                        {
                            data[data.Count - 1][3] = DateTime.Parse(data[data.Count - 1][3]).ToShortDateString() + DateTime.Parse(data[data.Count - 1][3]).ToShortTimeString();
                        }
                        else //Иначе - только время
                        {
                            data[data.Count - 1][3] = DateTime.Parse(data[data.Count - 1][3]).ToShortTimeString();
                        }
                        data[data.Count - 1][4] = reader[4].ToString();
                        data[data.Count - 1][5] = reader[5].ToString();
                        data[data.Count - 1][6] = reader[8].ToString();
                        data[data.Count - 1][7] = reader[9].ToString();
                    }
                }
                if (count == 0)
                {
                    label1.Text = "Ничего нет(\nК сожалению по выбранному вами маршруту в этот день нет рейсов без пересадок или все билеты распроданы";
                    label1.Visible = true;
                    label1.Dock = DockStyle.Fill;

                    flowLayoutPanel1.Visible = false;
                }
                else
                {
                    foreach (string[] s in data)
                    {
                        if (s[1] != null)
                        {
                            dataGridView2.Rows.Add(s);
                        }
                    }
                }
            }

            reader.Close();

            connection.Close();
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(e.KeyChar >='0' && e.KeyChar <= '9')
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
            if(dataGridView1.Visible == true)
            {
                if (textBox1.Text.Length != 0)
                {
                    bool ok = false;
                    int row = 0;
                    for (int i = 0; i < dataGridView1.Rows.Count; i++)
                    {
                        string s = dataGridView1[0, i].Value.ToString();
                        if(textBox1.Text == s)
                        {
                            ok = true;
                            row = i;
                            break;
                        }
                    }
                    if (ok)
                    {
                        FormBuy F3 = new FormBuy(dataGridView1[0, row].Value.ToString());
                        F3.Owner = this;

                        F3.ShowDialog();
                    }
                    else
                    {
                        MessageBox.Show("Такого рейса не существует.", "ОШИБКА!");
                    }
                }
                else
                {
                    MessageBox.Show("Введите номер рейса.", "ОШИБКА!");
                }
            }
            else
            {
                if (textBox1.Text.Length != 0)
                {
                    bool ok = false;
                    int row = 0;
                    for (int i = 0; i < dataGridView2.Rows.Count; i++)
                    {

                        string s = dataGridView2[0, i].Value.ToString();
                        if (textBox1.Text == s)
                        {
                            ok = true;
                            row = i;
                            break;
                        }
                    }
                    if (ok)
                    {
                        FormBuy F3 = new FormBuy(dataGridView2[0, row].Value.ToString());
                        F3.Owner = this;


                        F3.ShowDialog();
                    }
                    else
                    {
                        MessageBox.Show("Такого рейса не существует.", "ОШИБКА!");
                    }
                }
                else
                {
                    MessageBox.Show("Введите номер рейса.", "ОШИБКА!");
                }
            }
        }

    }
}
