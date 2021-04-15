#!/usr/bin/php
<?php
	function ft_split($str)
	{
		$rez = array_filter(explode(" ", $str));
		sort($rez);
		return $rez;
	}
?>