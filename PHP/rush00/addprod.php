<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Online Shop</title>
    <link rel="stylesheet" type="text/css" href="style.css">
  </head>
  <body>
    <ul class="nav">
      <li class="nav"><a class="active nav" href="index.php">Home</a></li>
<?php
require_once('config.php');
require_once('functions.php');

putNav($con);

if (!isAdmin($con))
  header('Location: index.php');
else {
  //drop down categorie
  $form = '
      <form class="login" action="login.php" method="post">
         <label><b>Nume</b></label>
         <input type="text" placeholder="Nume" name="name" required>
         <label><b>Pret</b></label>
         <input type="text" placeholder="Pret" name="pret" required>
         <label><b>Categorie</b></label>
         <input type="text" placeholder="Pret" name="pret" required>
         <label><b>Password</b></label>
         <input type="password" placeholder="Enter Password" name="pass" required>
         <button type="submit">Login</button>';
  echo $form;
}
?>
