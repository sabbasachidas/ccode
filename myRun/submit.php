<doctype html>
<html>
<head>
	<title>new 1 test title</title>
	<meta charset="utf-8"/>
	<link rel="stylesheet" type="text/css" href="style.css"
	<style>
	</style>

</head>
<body>
	<h1>Test new1, a form in post method passing data to php file</h1>
	
	
<?php
$host="localhost";
$username="root";
$password="";
$dbname="testdb";

//mysql_connect("$host", "$username" , "$password" ) or die("can not connect server");
//mysql_select_db("$dbname") or die ("can not select DB");
$conn = new mysqli($host, $username, $password , $dbname);
$name= $_POST['name'];
$roll= $_POST['roll'];
$dept= $_POST['dept'];
$fee= $_POST['fee'];

$sql="INSERT INTO info (Name, Roll, Dept, Fee) VALUES
	('$name', '$roll', '$dept', '$fee')";
	
if ($conn->query($sql) == true){
	echo "<h2>Submission success !!!</h2>";
}
else {
	echo "Error:" .$sql ."<br/>". $conn->error;
}
$conn->close();


?>
	
	
	
</body>


</html>