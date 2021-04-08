//
// Created by Jun GAO on 4/8/21.
//

#include <string>

#ifndef NDK_CALLEE_STRINGPROVIDER_H
#define NDK_CALLEE_STRINGPROVIDER_H


class StringProvider {
public:
    const char* getMclass();
    std::string getNclass();
    const char* getEnImeiMethod();
    const char* getEnImeiSig();
    std::string getAPIImeiMethod();
    std::string getAPIImeiSig();
    std::string getSendMethod();
    const char* getSendSig();
};


const char* StringProvider::getMclass() {
    return "lu/uni/jungao/bm16/MiddleCls";
}

std::string StringProvider::getNclass() {
    return "lu/uni/jungao/bm16/NativeDelegator";
}

std::string StringProvider::getAPIImeiMethod() {
    return "getImei";
}

std::string StringProvider::getAPIImeiSig() {
    return "()Ljava/lang/String;";
}

const char* StringProvider::getEnImeiMethod() {
    return "nativeGetIMEI";
}

const char* StringProvider::getEnImeiSig() {
    return "(Landroid/telephony/TelephonyManager;)Ljava/lang/String;";
}

std::string StringProvider::getSendMethod() {
    return "sendPseudoSMS";
}

const char* StringProvider::getSendSig() {
    return "(Ljava/lang/String;)V";
}
#endif //NDK_CALLEE_STRINGPROVIDER_H
