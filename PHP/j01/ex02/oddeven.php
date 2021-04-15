#!/usr/bin/php
<?php
	$stdin = fopen("php://stdin", "r");
	while ($stdin && !feof($stdin)) {
		echo "Entrez un nombre: ";
		$no = fgets($stdin);
		if ($no)
		{
			$no = str_replace("\n", "", "$no");
			if (is_numeric($no)) {
				if ($no % 2 == 0) 
					echo "Le chiffre " . $no . " est Pair\n";
				else
					echo "Le chiffre " . $no . " est Impair\n";
			}
			else
				echo "'" . $no . "' n'est pas un chiffre\n";
		}
	}
	fclose($stdin);
	echo "\n";
?>