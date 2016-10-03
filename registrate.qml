import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import com.FastAnt.Engine 1.0

Engine {
    id:register_menu
    width: 360
    height: 360

    Image {
        id: image1
        x: 0
        y: 0
        width: parent.width
        height: parent.height
        source: "tsoy.jpg"

        TextEdit {
            id: login
            x: 155
            y: 211
            width: 80
            height: 20
            text: qsTr("Login")
            font.pixelSize: 12
        }

        TextEdit {
            id: pass
            x: 155
            y: 263
            width: 80
            height: 20
            text: qsTr("Pass")
            font.pixelSize: 12
        }

        TextEdit {
            id: email
            x: 155
            y: 237
            width: 80
            height: 20
            text: qsTr("eMail")
            font.pixelSize: 12
        }

        Button {
            id: button1
            x: 252
            y: 312
            opacity: 0.5
            text: qsTr("Reistrate")
            onClicked: {
            register_menu.registrate(login.text,email.text,pass.text);
            }
        }
    }


}
