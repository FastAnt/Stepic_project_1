#include "Engine.h"
#include "dumpy_server.h"

Engine::Engine()
{
}

void Engine::registrate(QString login, QString pass , QString email){
    try {
//        m_NetworkMng.connect();

//        m_NetworkMng.sendRegistreteRequest();
//        m_NetworkMng.reciveResponse();

//        m_UserProfile.createProfine();
//        m_NetworkMng.sendNewProfile();
        //        m_NetworkMng.connect();
        //        m_UserProfile.fillUserAuthData();

        //        m_NetworkMng.sendAuthtoriseRequest(m_infoCoder.codeToHostFormat(m_NetworkMng.userData));
        //        m_NetworkMng.reciveResponse();
                ////TODO need realize on real server
                /// at this iteration have dumpy server obj
                ///
       dumpy_server::dmupy_server_rigistraite(login,pass,email);

    }
//    catch(eNetworkErrors){/* here will be process of enum of error from the network module*/}
//    catch(eUserProfineErrors){/* here will be process of enum of error from the user profile module*/}
    catch(...){throw ;}

}

bool Engine::authtorise(QString login , QString pass){
    try{
//        m_NetworkMng.connect();
//        m_UserProfile.fillUserAuthData();

//        m_NetworkMng.sendAuthtoriseRequest(m_infoCoder.codeToHostFormat(m_NetworkMng.userData));
//        m_NetworkMng.reciveResponse();
        ////TODO need realize on real server
        /// at this iteration have dumpy server obj
        ///

        if(dumpy_server::dmupy_server_authtorise(login,pass))
            return true;
        return false;
    }
//    catch(eNetworkErrors){ /* here will be process of enum of error from the network module*/}
//    catch(eUserProfineErrors){/* here will be process of enum of error from the user-profile module*/}
    catch(...){throw ;}


}

void Engine::getCorruptionerProfile(unsigned long id){
    try {
//        m_NetworkMng.connect();

//        m_NetworkMng.sendCorruptionerProfileRequest(id);
//        m_correntCorruptionerProfile.fillData(m_NetworkMng.reciveResponse());
//        showCorruptionerProfile();
    }
    ////TODO need realize on real server
    /// at this iteration have dumpy server obj
    ///
//    catch(eNetworkErrors){/* here will be process of enum of error from the network module*/}
//    catch(eUserProfineErrors){/* here will be process of enum of error from the user profile module*/}
    catch(...){throw ;}

}

void Engine::sendCorruptioner(){
    try {
//        m_NetworkMng.connect();
//        m_NetworkMng.sendCorruptionerProfile(m_infoCoder.codeToHostFormat(
//                                                 m_correntCorruptionerProfile.Data));
//        m_NetworkMng.reciveRusult();
//        showResult();
    }
//    catch(eNetworkErrors){/* here will be process of enum of error from the network module*/}
//    catch(eUserProfineErrors){/* here will be process of enum of error from the user profile module*/}
    catch(...){throw ;}
}

void Engine::editCorruptionerProfile(){
        try {
//            m_NetworkMng.connect();

//            m_NetworkMng.sendCorruptionerProfileRequest(id);
//            m_correntCorruptionerProfile.fillData(m_NetworkMng.reciveResponse());
//            showCorruptionerProfileEdit();
//            m_NetworkMng.sendCorruptionerProfile(m_infoCoder.codeToHostFormat(
//                                                     m_correntCorruptionerProfile.Data));
        }
    ////TODO need realize on real server
    /// at this iteration have dumpy server obj
    ///
//        catch(eNetworkErrors){/* here will be process of enum of error from the network module*/}
//        catch(eUserProfineErrors){/* here will be process of enum of error from the user profile module*/}
        catch(...){throw ;}
    }

    void Engine::addCorruptioner(){
        try {
//            m_NetworkMng.connect();
//            showCorruptionerProfileEdit();
//            m_NetworkMng.sendCorruptionerProfile(m_infoCoder.codeToHostFormat(
//                                                     m_correntCorruptionerProfile.Data));
        }
        ////TODO need realize on real server
        /// at this iteration have dumpy server obj
        ///
//        catch(eNetworkErrors){/* here will be process of enum of error from the network module*/}
//        catch(eUserProfineErrors){/* here will be process of enum of error from the user profile module*/}
        catch(...){throw ;}
    }
