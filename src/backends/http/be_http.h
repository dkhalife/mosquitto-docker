#pragma once

#include "../backend.h"

/**
 * Represents an HTTP backed store.
 * Requires an existing HTTP server.
 */
class BE_Http: public IBackend
{
public:
    /**
     * Constructs the backend state
     * @param options The relevant `mosquitto_opt` from the broker's config file
     */
    BE_Http(const std::map<std::string, std::string>& options);

    /**
     * Verifies a client credentials against the Http store
     * @return True if the client should be granted access by the broker
     */
    bool authenticate(const std::string& username, const std::string& password);

    /**
     * Identifier to use in the broker configuration to connect to an Http backend
     */
    static constexpr const char* kind = "http";
};
