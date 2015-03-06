[Icons]
#if Arch == "i368"
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:ProgramOnTheWeb,{#MyAppName} (x86)}"; Filename: "{#MyAppURL}"; Flags: preventpinning excludefromshowinnewinstall 
Name: "{group}\{cm:UninstallProgram,{#MyAppName} (x86)}"; Filename: "{uninstallexe}"; Flags: preventpinning excludefromshowinnewinstall
Name: "{commondesktop}\{#MyAppName} (x86)"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName} (x86)"; Filename: "{app}\{#MyAppExeName}"; Tasks: quicklaunchicon
#elif Arch == "amd64"
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:ProgramOnTheWeb,{#MyAppName}}"; Filename: "{#MyAppURL}"; Flags: preventpinning excludefromshowinnewinstall 
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"; Flags: preventpinning excludefromshowinnewinstall
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: quicklaunchicon
#endif