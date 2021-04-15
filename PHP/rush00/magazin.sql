-- phpMyAdmin SQL Dump
-- version 4.5.4.1deb2ubuntu2
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Apr 02, 2017 at 03:02 AM
-- Server version: 5.7.17-0ubuntu0.16.04.1
-- PHP Version: 7.0.15-0ubuntu0.16.04.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `magazin`
--

-- --------------------------------------------------------

--
-- Table structure for table `categorii`
--

CREATE TABLE `categorii` (
  `ID` int(11) NOT NULL,
  `Denumire` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `categorii`
--

INSERT INTO `categorii` (`ID`, `Denumire`) VALUES
(1, 'Birou'),
(2, 'Electronice');

-- --------------------------------------------------------

--
-- Table structure for table `conturi`
--

CREATE TABLE `conturi` (
  `ID` int(11) NOT NULL,
  `User` varchar(1000) NOT NULL,
  `Pass` varchar(1000) NOT NULL,
  `Session` varchar(100) DEFAULT NULL,
  `Acces` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `conturi`
--

INSERT INTO `conturi` (`ID`, `User`, `Pass`, `Session`, `Acces`) VALUES
(2, 'admin', '3b612c75a7b5048a435fb6ec81e52ff92d6d795a8b5a9c17070f6a63c97a53b2', 'l7RUNUCD7p71IaxlqwOe', 1),
(4, 'test', '9f86d081884c7d659a2feaa0c55ad015a3bf4f1b2b0b822cd15d6c15b0f00a08', '', 0),
(5, 'test2', '60303ae22b998861bce3b28f33eec1be758a213c86c93c076dbe9f558c11c752', NULL, 0);

-- --------------------------------------------------------

--
-- Table structure for table `Istoric`
--

CREATE TABLE `Istoric` (
  `ID` int(11) NOT NULL,
  `prod_ID` longtext NOT NULL,
  `Cant` int(11) NOT NULL,
  `Data` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `produse`
--

CREATE TABLE `produse` (
  `ID` int(11) NOT NULL,
  `Nume` varchar(1000) NOT NULL,
  `Pret` float NOT NULL,
  `Categorie` int(11) NOT NULL,
  `Stoc` int(11) NOT NULL,
  `IMG` varchar(1000) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `produse`
--

INSERT INTO `produse` (`ID`, `Nume`, `Pret`, `Categorie`, `Stoc`, `IMG`) VALUES
(1, 'Scaun Birou', 100, 1, 100, 'https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcQIT860tYXSg363C9Pj2rrK7BtoNy6JWPMMDUX5yHYJFPodN2sFsA'),
(2, 'Masa Birou', 500, 1, 10, 'http://www.tamos.ro/totuldespremobila/wp-content/uploads/2012/10/masa-birou-calculator-co1000.jpg'),
(3, 'Corsair Vengeance 8GB (1x8GB) DDR3 1600', 180, 2, 30, 'https://images-na.ssl-images-amazon.com/images/I/51d-RxwZ0PL._SX450_.jpg');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `categorii`
--
ALTER TABLE `categorii`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `conturi`
--
ALTER TABLE `conturi`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `Istoric`
--
ALTER TABLE `Istoric`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `produse`
--
ALTER TABLE `produse`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `categorii`
--
ALTER TABLE `categorii`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `conturi`
--
ALTER TABLE `conturi`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- AUTO_INCREMENT for table `Istoric`
--
ALTER TABLE `Istoric`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `produse`
--
ALTER TABLE `produse`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
