#ifndef BANCHOCLIENT_H
#define BANCHOCLIENT_H

#include "ConVar.h"
#include "Environment.h"

class ConVar;

extern Environment *env;

class OsuBancho {
    private:
        bool m_connected;
        bool m_running;
        static ConVar *m_osu_bancho_endpoint;
        static ConVar *m_osu_bancho_username;
        static ConVar *m_osu_bancho_password;
        static ConVar *m_osu_bancho_build_name;
        static ConVar *m_osu_bancho_time_zone;
        static ConVar *m_osu_bancho_display_location;
        static ConVar *m_osu_bancho_client_hash;
        static ConVar *m_osu_bancho_block_pms;
        void send();
        void recieve();

    public:
        void run();
        void stop();

};

#endif
