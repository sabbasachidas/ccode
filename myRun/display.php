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
	<h1>Test new1, a form in post method displaying data to php file</h1>
	
	
<?php
$host="localhost";
$username="root";
$password="";
$dbname="testdb";


$conn = new mysqli($host, $username, $password , $dbname);


$sql="SELECT * FROM info";

$result= $conn->query($sql);

?>
	<table border=1>
	<tr>
	<td>Name</td>
	<td>Roll</td>
	<td>Department</td>
	<td>fee</td>
	</tr>
	
<?php
	while($row = $result->fetch_assoc()){
	?>
<tr>
<td> <?php echo $row["Name"]; ?>
<td> <?php echo $row["Roll"]; ?>
<td> <?php echo $row["Dept"]; ?>
<td> <?php echo $row["Fee"]; ?>
	
<?php 	
	}
$conn->close();


?>
	
	
</table>	
</body>


</html>