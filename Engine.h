#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <Networkmng.h>
#include <QQuickItem>
#include <profiler.h>
#include <infocoder.h>
class Engine : public QQuickItem
{
public:
    Engine();

    // request to host
    Q_INVOKABLE void registrate(QString login, QString pass , QString email);
    Q_INVOKABLE bool authtorise(QString login , QString pass);
    Q_INVOKABLE void getCorruptionerProfile(unsigned long id);
    Q_INVOKABLE void sendCorruptioner();
    // internal methods
    Q_INVOKABLE void editCorruptionerProfile();
    Q_INVOKABLE void addCorruptioner();

    // gui
    Q_INVOKABLE void showCorruptionerProfile();
    Q_INVOKABLE void showProfile();
    Q_INVOKABLE void showResult();


    // members
private :
     NetworkMng m_NetworkMng;
     Profiler m_UserProfile;
     Profiler m_correntCorruptionerProfile;

     infoCoder m_infoCoder;
};

#endif // ENGINE_H
