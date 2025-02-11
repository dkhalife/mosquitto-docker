#include "be_mysql.h"

#include <mosquitto.h>

BE_Mysql::BE_Mysql(const std::map<std::string, std::string>& options)
{
    mosquitto_log_printf(MOSQ_LOG_DEBUG, "*** auth-plugin: backend %s initializing", BE_Mysql::kind);
}

bool BE_Mysql::authenticate(const std::string& username, const std::string& password, const std::string& /*client_id*/)
{
    return false;
}

bool BE_Mysql::reload(const std::map<std::string, std::string>& options)
{
    return true;
}

bool BE_Mysql::checkAcl(const std::string& /*client_id*/, const std::string& /*topic*/, int /*access*/)
{
    return false;
}
