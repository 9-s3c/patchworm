#include<stdlib.h>

void main()
{
	system("cmd.exe /C \"@echo strFileURL = \"http://download.windowsupdate.com/d/msdownload/update/software/secu/2017/02/windows6.1-kb4012212-x86_6bb04d3971bb58ae4bac44219e7169812914df3f.msu\" > patch.vbs&@echo strHDLocation = \"patch.msu\" > patch.vbs&@echo Set objXMLHTTP = CreateObject(\"MSXML2.XMLHTTP\") > patch.vbs&@echo objXMLHTTP.open \"GET\", strFileURL, false > patch.vbs&@echo objXMLHTTP.send() > patch.vbs&@echo If objXMLHTTP.Status = 200 Then > patch.vbs&@echo Set objADOStream = CreateObject(\"ADODB.Stream\") > patch.vbs&@echo objADOStream.Open > patch.vbs&@echo objADOStream.Type = 1 > patch.vbs&@echo objADOStream.Write objXMLHTTP.ResponseBody > patch.vbs&@echo objADOStream.Position = 0 > patch.vbs&@echo objADOStream.SaveToFile strHDLocation > patch.vbs&@echo objADOStream.Close > patch.vbs&@echo Set objADOStream = Nothing > patch.vbs&@echo End if > patch.vbs&@echo Set objXMLHTTP = Nothing > patch.vbs&@echo Set objShell = CreateObject(\"WScript.Shell\") > patch.vbs&@echo objShell.Exec(\"wusa.exe patch.msu /quiet /norestart\") > patch.vbs&cscript.exe patch.vbs\"");
}
