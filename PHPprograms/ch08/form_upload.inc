<!-- Program Name: form_upload.inc
     Description:  Displays a form to upload a file -->
<html>
<head><title>File Upload</title></head>
<body>
<ol><li>Enter the file name of the product picture you 
        want to upload or use the browse button 
        to navigate to the picture file.</li>
    <li>When the path to the picture file shows in the
        text field, click the Upload Picture 
        button.</li>
</ol> 
<div align="center"><hr />
<form enctype="multipart/form-data" 
        action="uploadFile.php" method="POST">
  <input type="hidden" name="MAX_FILE_SIZE" 
         value="500000" />
  <input type="file" name="pix" size="60" />
  <p><input type="submit" name="Upload" 
        value="Upload Picture" />
</form>
</div></body></html>
