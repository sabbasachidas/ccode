<DOCTYPE html>
<html>
<head>
	<title>Run4</title>

</head>
<body>
	<?php
		$hostname= "localhost";
		$username="root";
		$pass="";
		$dbname="testdb";
		$conn= new mysqli($hostname,$username,$pass,$dbname);
		$sql= "SELECT * FROM run3";
		$result=$conn->query($sql);
		?>
		<table border=1>
			<tr>
			<th>Name</th>
			<th>Roll</th>
			<th>Department</th>
			</tr>
			<?php
				while($row= $result->fetch_assoc()){
			?>
			<tr>
				<td><?php echo $row["Name"] ?></td>
				<td><?php echo $row["Roll"] ?></td>
				<td><?php echo $row["Dept"] ?></td>
			</tr>
			<?php
				}
		
		
		
			$conn->close();
			?>
		</table
</body>
</html>