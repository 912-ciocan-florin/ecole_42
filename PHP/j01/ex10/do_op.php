#!/usr/bin/php
<?php
	if($argc == 4)
	{
		$nb1 = trim($argv[1]);
		$nb2 = trim($argv[3]);
		$sign = trim($argv[2]);
		if($sign == "+")
			printf("%d", $nb1+$nb2);
		if($sign == "-")
			printf("%d", $nb1-$nb2);
		if($sign == "/")
			printf("%d", $nb1/$nb2);
		if($sign == "*")
			printf("%d", $nb1*$nb2);
		if($sign == "%")
			printf("%d", $nb1%$nb2);
	}
	else
	{
		echo "Incorrect Parameters";
	}
?>