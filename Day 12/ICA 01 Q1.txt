cd %USERPROFILE%\Desktop
mkdir CSC2244 Marks Exam

cd CSC2244

mkdir practical 
cd practical
echo a> file.txt
echo  a> file.docx
echo  a> file.pptx
cd..

mkdir teory
cd teory
echo  a> file.txt
echo  a> file.docx
echo  a> file.pptx
cd..

mkdir exam
cd exam
echo  a> file.txt
echo  a> file.docx
echo  a> file.pptx


cd %USERPROFILE%\Desktop
echo  a> Icae_Marks.xlsx
echo  a> Final_Exam_Marks.xlsx
move Icae_Marks.xlsx Marks\
move Final_Exam_Marks.xlsx Marks\

cd %userprofile%\Desktop
xcopy Marks CSC2244\exam /E /I
attrib +h exam 