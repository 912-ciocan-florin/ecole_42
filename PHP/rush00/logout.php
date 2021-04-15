<?php
require_once('config.php');

session_start();
if(isset($_SESSION['session'])){
  $ses = htmlentities($_SESSION['session']);
  $query = "UPDATE conturi SET Session='' WHERE Session='$ses'";
  $result = mysqli_query($con, $query);
  unset($_SESSION['session']);
}
header('Location: index.php');
?>
