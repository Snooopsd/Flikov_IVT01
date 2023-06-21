using Microsoft.VisualStudio.TestTools.UnitTesting;
using ConsoleApp2;
using System;

namespace ConsoleApp2.Tests
{
    [TestClass()]
    public class ForTestTests
    {
        //Первый unit-тест
        [TestMethod()]
        public void Metod_10_20_30_40_exp_2100()
        {
            //arrange
            int x = 10; int y = 20;
            int z = 30; int k = 40;
            int expected = 2100;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Второй Unit-тест
        [TestMethod()]
        public void Metod_1_2_3_4_exp_21()
        {
            //arrange
            int x = 1; int y = 2;
            int z = 3; int k = 4;
            int expected = 21;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Третий Unit-тест
        [TestMethod()]
        public void Metod_minus1_2_3_4_exp_7()
        {
            //arrange
            int x = -1; int y = 2;
            int z = 3; int k = 4;
            int expected = 7;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Четвертый Unit-тест
        [TestMethod()]
        public void Metod_1_minus2_3_4_exp_minus7()
        {
            //arrange
            int x = 1; int y = -2;
            int z = 3; int k = 4;
            int expected = -7;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Пятый Unit-тест
        [TestMethod()]
        public void Metod_1_2_minus3_4_exp_3()
        {
            //arrange
            int x = 1; int y = 2;
            int z = -3; int k = 4;
            int expected = 3;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Шестой Unit-тест
        [TestMethod()]
        public void Metod_1_2_3_minus4_exp_minus3()
        {
            //arrange
            int x = 1; int y = 2;
            int z = 3; int k = -4;
            int expected = -3;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Седьмой тест
        [TestMethod()]
        public void Metod_minus1_minus2_3_4_exp_minus21()
        {
            //arrange
            int x = -1; int y = -2;
            int z = 3; int k = 4;
            int expected = -21;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Восьмой тест
        [TestMethod()]
        public void Metod_minus1_2_minus3_minus4_exp_minus7()
        {
            //arrange
            int x = -1; int y = 2;
            int z = -3; int k = -4;
            int expected = -7;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Девятый тест
        [TestMethod()]
        public void Metod_minus1_minus2_minus3_minus4_exp_21()
        {
            //arrange
            int x = -1; int y = -2;
            int z = -3; int k = -4;
            int expected = 21;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }

        //Десятый Unit-тест
        [TestMethod()]
        public void Metod_1_2_minus3_minus4_exp_minus21()
        {
            //arrange
            int x = 1; int y = 2;
            int z = -3; int k = -4;
            int expected = -21;
            //act
            ForTest ft = new ForTest();
            int actual = ft.Metod(x, y, z, k);
            //assert
            Assert.AreEqual(expected, actual);
        }
    }
}