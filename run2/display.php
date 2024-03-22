<DOCTYPE html>
<html>
<head>
	<title> This is Run2 submit</title>
	<meta charset="utf-8"/>
	<style>
	</style>
</head>


<body>
	
<?php
	
	$hostname="localhost";
	$username="root";
	$password="";
	$dbname="testdb";
	$conn=new mysqli($hostname,$username,$password,$dbname);

	
	$sql= "SELECT * FROM run2";
	$result=$conn->query($sql);
?>
<table border=1>
<tr>
	<th>Name</th>
	<th>Roll</th>
	<th>Dept</th>
	<th>Year</th>
</tr>
<?php 
	while($row=$result->fetch_assoc()){
		?>
		
	

<tr>
	<td> <?php echo $row["Name"]; ?> </td>
	<td> <?php echo $row["Roll"]; ?> </td>
	<td> <?php echo $row["Dept"]; ?> </td>
	<td> <?php echo $row["Year"]; ?> </td>
	</tr>

<?php
	}
	$conn->close();
?>
</table>

</body>

</html>