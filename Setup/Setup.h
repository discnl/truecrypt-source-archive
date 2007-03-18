BOOL StatDeleteFile ( char *lpszFile );
BOOL StatRemoveDirectory ( char *lpszDir );
HRESULT CreateLink ( char *lpszPathObj , char *lpszArguments , char *lpszPathLink );
void GetProgramPath ( HWND hwndDlg , char *path );
void StatusMessage ( HWND hwndDlg , char *stringId );
void StatusMessageParam ( HWND hwndDlg , char *stringId , char *param );
void RegMessage ( HWND hwndDlg , char *txt );
void RegRemoveMessage (HWND hwndDlg, char *txt);
void CopyMessage ( HWND hwndDlg , char *txt );
void RemoveMessage ( HWND hwndDlg , char *txt );
void IconMessage ( HWND hwndDlg , char *txt );
int CALLBACK BrowseCallbackProc ( HWND hwnd , UINT uMsg , LPARAM lp , LPARAM pData );
void LoadLicense ( HWND hwndDlg );
BOOL DoFilesInstall ( HWND hwndDlg , char *szDestDir );
BOOL DoRegInstall ( HWND hwndDlg , char *szDestDir , BOOL bInstallType );
BOOL DoRegUninstall (HWND hwndDlg, BOOL bRemoveDeprecated);
BOOL DoServiceUninstall ( HWND hwndDlg , char *lpszService );
BOOL DoDriverUnload ( HWND hwndDlg );
BOOL DoDriverInstall ( HWND hwndDlg );
BOOL DoShortcutsInstall ( HWND hwndDlg , char *szDestDir , BOOL bProgGroup, BOOL bDesktopIcon );
BOOL DoShortcutsUninstall (HWND hwndDlg, char *szDestDir);
void OutcomePrompt ( HWND hwndDlg , BOOL bOK );
void DoUninstall ( void *hwndDlg );
void DoInstall ( void *hwndDlg );
BOOL WINAPI InstallDlgProc ( HWND hwndDlg , UINT msg , WPARAM wParam , LPARAM lParam );
int WINAPI WINMAIN ( HINSTANCE hInstance , HINSTANCE hPrevInstance , char *lpszCommandLine , int nCmdShow );
