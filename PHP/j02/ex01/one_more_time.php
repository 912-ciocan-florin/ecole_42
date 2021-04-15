#!/usr/bin/php
<?php
	if($argc == 2)
	{
		if(substr_count($argv[1]," ") === 4)
		{
		date_default_timezone_set('Europe/Paris');
		$str = $argv[1];
		$str = preg_replace('/[lL]undi/', 'Monday', $str);
		$str = preg_replace('/[mM]ardi/', 'Tuesday', $str);
		$str = preg_replace('/[mM]ercredi/', 'Wednesday', $str);
		$str = preg_replace('/[jJ]eudi/', 'Thursday', $str);
		$str = preg_replace('/[vV]endredi/', 'Friday', $str);
		$str = preg_replace('/[sS]amedi/', 'Saturday', $str);
		$str = preg_replace('/[dD]imanche/', 'Sunday', $str);
		$str = preg_replace('/[jJ]anvier/', 'January', $str);
		$str = preg_replace('/[fF]evrier/', 'February', $str);
		$str = preg_replace('/[mM]ars/', 'March', $str);
		$str = preg_replace('/[aA]vril/', 'April', $str);
		$str = preg_replace('/[mM]ai/', 'May', $str);
		$str = preg_replace('/[jJ]uin/', 'June', $str);
		$str = preg_replace('/[jJ]uillet/', 'July', $str);
		$str = preg_replace('/[aA]oût/', 'August', $str);
		$str = preg_replace('/[sS]eptembre/', 'September', $str);
		$str = preg_replace('/[oO]ctobre/', 'October', $str);
		$str = preg_replace('/[nN]ovembre/', 'November', $str);
		$str = preg_replace('/[dD]écembre/', 'December', $str);

		$date = strtotime($str, $now);
		echo "$date";
	}
	}
?>