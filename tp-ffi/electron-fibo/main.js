const { app, BrowserWindow } = require('electron')

function createWindow () {
    let win = new BrowserWindow({
        width: 600,
        height: 600,
        webPreferences: { nodeIntegration: true }
    })

    win.loadFile('index.html')

    // SHOW DEV TOOLS
    win.webContents.openDevTools()

    win.on('closed', () => { win = null })
}

app.on('ready', createWindow)

app.on('window-all-closed', () => {
    if (process.platform !== 'darwin') {
        app.quit();
    }
});

