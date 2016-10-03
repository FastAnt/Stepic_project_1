import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import com.FastAnt.Engine 1.0

Engine {
    id : engine
    width: 360
    height: 720
    visible: true

    Registrate
    {
        id: registerMenu
        x:0
        y:0
        width: 0
        height: 0
        visible: false
    }

    ParallelAnimation
    {
        id: openRegistrate
        onStarted: {registerMenu.visible = true; registerMenu.z = 3}

        NumberAnimation {
            target: registerMenu
            property: "y"
            from: 0
            to: 180
            duration: 300
            easing.type: Easing.InOutQuad
        }
        NumberAnimation {
            target: registerMenu
            property: "width"
            from: 0
            to: 360
            duration: 300
            easing.type: Easing.InOutQuad
        }
        NumberAnimation {
            target: registerMenu
            property: "height"
            from: 0
            to: 360
            duration: 300
            easing.type: Easing.InOutQuad
        }
        NumberAnimation {
            target: bakground
            property: "opacity"
            from: 1
            to: 0
            duration: 300
            easing.type: Easing.InOutQuad
        }
    }

    ParallelAnimation
    {
        id: closeRegistrate


        NumberAnimation {
            target: registerMenu
            property: "width"
            from: 360
            to: 0
            duration: 300
            easing.type: Easing.InOutQuad
        }
        NumberAnimation {
            target: registerMenu
            property: "height"
            from: 360
            to: 0
            duration: 300
            easing.type: Easing.InOutQuad
        }
        NumberAnimation {
            target: registerMenu
            property: "opacity"
            from: 1
            to: 0
            duration: 300
            easing.type: Easing.InOutQuad
        }

        onStopped:{registerMenu.visible = true; registerMenu.z = 0}
    }
    function openUserDW(){openRegistrate.start()  } ///TODO
    Image
    {
        id : bakground
        x: 1
        y: 0
        width: engine.width
        height:  engine.height
        source: "gandi.jpg"
        TextEdit {
            id: login
            x: 51
            y: 569
            width: 259
            height: 20
            color: "#05052c"
            text: "Login"
            font.pixelSize: 17
        }

        TextEdit {
            id: pass
            x: 51
            y: 612
            width: 259
            height: 20
            text: "Pass"
            selectionColor: "#0e0c78"
            font.pixelSize: 17
        }

        Button {
            x: 51
            y: 659
            width: 259
            height: 40
            text: qsTr("GO ON!")
            opacity: 0.5
            onClicked: {
                if(engine.authtorise(login.text,pass.text))
                {
                }
                else show_incorrect();

            }
        }

        Button {
            x: 252
            y: 8
            text: "Registrate"
                    opacity: 0.5
            autoRepeat: false
            onClicked:
            {
                openUserDW();
            }

        }
    }


}
