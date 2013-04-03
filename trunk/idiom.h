#ifndef IDIOM_H
#define IDIOM_H

#include <QString>

enum idiomtype{
  ENG=0,SPA=1
};

class Idiom {
public:
  idiomtype it;
  QString windowTitle[2];
  QString scanButtonLabel[2];
  QString connectButtonLabel[2];
  QString disconnectButtonLabel[2];
  QString menuRecentConnections[2];
  QString messageSearching[2];
  QString messageBluetoothDisabled[2];
  QString messageNearDivices[2];
  QString messageDeviceAvailable[2];
  QString imageInfo[2];
public:
  Idiom() : it(ENG) {
    windowTitle[ENG] = "NXT PC Remote Control";
    windowTitle[SPA] = "Control Remoto de PC para NXT";

    scanButtonLabel[ENG] = "Scan";
    scanButtonLabel[SPA] = "Buscar";

    connectButtonLabel[ENG] = "Connect";
    connectButtonLabel[SPA] = "Conectar";

    disconnectButtonLabel[ENG] = "Disconnect";
    disconnectButtonLabel[SPA] = "Desconectar";

    menuRecentConnections[ENG] = "Recent connections";
    menuRecentConnections[SPA] = "Conexiones Recientes";

    messageSearching[ENG] = "Searching to devices...";
    messageSearching[SPA] = "Buscando Dispositivos...";

    messageBluetoothDisabled[ENG] = "Bluetooth disabled";
    messageBluetoothDisabled[SPA] = "Bluetooth deshabilitado";

    messageNearDivices[ENG] = "There isn´t near diveces";
    messageNearDivices[SPA] = "No hay dispositivos cercanos";

    messageDeviceAvailable[ENG] = "Device isn´t available";
    messageDeviceAvailable[SPA] = "El dispositivo ya no esta disponible";

    imageInfo[ENG] = ":/images/info-eng.png";
    imageInfo[SPA] = ":/images/info-spa.png";
  }

  QString getText() {
    switch (it) {
    case ENG: return "eng";
    case SPA: return "spa";
    }
  }

  QString getWindowTitle()              { return windowTitle[it]; }
  QString getScanButtonLabel()          { return scanButtonLabel[it]; }
  QString getConnectButtonLabel()       { return connectButtonLabel[it]; }
  QString getDisconnectButtonLabel()    { return disconnectButtonLabel[it]; }
  QString getMenuRecentConnections()    { return menuRecentConnections[it]; }
  QString getMessageSearching()         { return messageSearching[it]; }
  QString getMessageBluetoothDisabled() { return messageBluetoothDisabled[it]; }
  QString getMessageNearDivices()       { return messageNearDivices[it]; }
  QString getMessageDeviceAvailable()   { return messageDeviceAvailable[it]; }
  QString getImageInfo()                { return imageInfo[it]; }
};

#endif // IDIOM_H