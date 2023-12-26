using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using MySql.Data.MySqlClient;

namespace Aeroflot
{
    public partial class FormSearch : Form
    {
        public FormSearch()
        {
            InitializeComponent();
        }

        public void button3_Click(object sender, EventArgs e)
        {
            if(comboBox1.Text.Length == 0)
            {
                MessageBox.Show("Выберите город отправления", "ОШИБКА");
            }
            else if(comboBox2.Text.Length == 0)
            {
                MessageBox.Show("Выберите город прибытия", "ОШИБКА");
            }
            else if (comboBox2.Text == comboBox1.Text)
            {
                MessageBox.Show("Таких рейсов не существует", "ОШИБКА");
            }
            else
            {   
                if (checkBox1.Checked) 
                {
                    FormList F2 = new FormList(comboBox1.Text, comboBox2.Text, dateTimePicker1.Text, 1);
                    F2.Owner = this;

                    F2.dataGridView1.Visible = false;

                    F2.ShowDialog();
                }
                else
                {
                    FormList F2 = new FormList(comboBox1.Text, comboBox2.Text, dateTimePicker1.Text, 0);
                    F2.Owner = this;

                    F2.dataGridView1.Visible = true;

                    F2.dataGridView2.Visible = false;

                    F2.ShowDialog();
                }
            }
        }
    }
}
