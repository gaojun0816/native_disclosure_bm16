//
// Created by Jun GAO on 4/8/21.
//

#include <string>

#ifndef NDK_CALLEE_STRINGPROVIDER_H
#define NDK_CALLEE_STRINGPROVIDER_H


class StringProvider {
public:
    std::string getMclass();
    std::string getNclass();
    std::string getEnImeiMethod();
    std::string getEnImeiSig();
    std::string getAPIImeiMethod();
    std::string getAPIImeiSig();
    std::string getSendMethod();
    std::string getSendSig();
};


std::string StringProvider::getMclass() {
    std::string c = "lu/uni/jungao/bm16/MiddleCls";
    return c;
}

std::string StringProvider::getNclass() {
    std::string c = "lu/uni/jungao/bm16/NativeDelegator";
    return c;
}

std::string StringProvider::getAPIImeiMethod() {
    std::string m = "getImei";
    return m;
}

std::string StringProvider::getAPIImeiSig() {
    std::string s = "()Ljava/lang/String;";
    return s;
}

std::string StringProvider::getEnImeiMethod() {
    std::string m = "nativeGetIMEI";
    return m;
}

std::string StringProvider::getEnImeiSig() {
    std::string s = "(Landroid/telephony/TelephonyManager;)Ljava/lang/String;";
    return s;
}

std::string StringProvider::getSendMethod() {
    std::string m = "sendPseudoSMS";
    return m;
}

std::string StringProvider::getSendSig() {
    std::string s = "(Ljava/lang/String;)V";
    return s;
}
#endif //NDK_CALLEE_STRINGPROVIDER_H
