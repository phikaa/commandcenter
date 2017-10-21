#pragma once

#include "Common.h"
#include "UnitType.h"

namespace BuildTypes
{
    enum { Unit, Upgrade, Buff, Ability, None };
}

class CCBot;
class BuildType
{
    size_t          m_type;
    std::string     m_name;
    sc2::Race       m_race;
    UnitType        m_unitType;
    sc2::UpgradeID  m_upgrade;
    

public:

    BuildType();
    BuildType(const std::string & name, CCBot & bot);
    BuildType(const UnitType & unitType);
    BuildType(const sc2::UpgradeID & upgradeType);

    bool    isUnit()        const;
    bool    isUpgrade()     const;

    const size_t &          getBuildType()  const;
    const std::string &     getName()       const;
    const sc2::Race &       getRace()       const;
    const UnitType & getUnitTypeID() const;
    const sc2::UpgradeID &  getUpgradeID()  const;
};