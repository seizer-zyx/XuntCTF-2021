<?php
error_reporting(0);
$key=$_GET['score'];
echo("score need 1k,10k,100k?游戏结束，分数为：".$key);
if($key>=100000)
{
    echo("flag{T3trI5_i5_i^t3ri^g}");
}
?>
