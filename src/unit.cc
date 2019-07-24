#include "unit.hh"

namespace FAF {

namespace Faction {
const std::string AEON = "Aeon";
const std::string CYBRAN = "Cybran";
const std::string UEF = "UEF";
}  // namespace Faction

namespace Common {
const std::string ACU = "Armored Command Unit";

const std::string ENGINEER_T1 = "T1 Engineer";
const std::string ENGINEER_T2 = "T2 Engineer";

const std::string LAND_FACTORY_T1 = "T1 Land Factory";
const std::string LAND_FACTORY_HQ_T2 = "T2 Land Factory HQ";

const std::string MASS_EXTRACTOR_T1 = "T1 Mass Extractor";
const std::string MASS_EXTRACTOR_T2 = "T2 Mass Extractor";
const std::string MASS_EXTRACTOR_T3 = "T3 Mass Extractor";

const std::string POWER_GENERATOR_T1 = "T1 Power Generator";
const std::string HYDRO_POWER_PLANT = "T1 Hydrocarbon Power Plant";

const std::string MASS_STORAGE = "T1 Mass Storage";
const std::string ENERGY_STORAGE = "T1 Energy Storage";
}  // namespace Common

using namespace Common;

const FactionMap<UnitMap> UNITS = {
    {
        Faction::AEON,
        {
            {ACU, {ACU, 0, 0, 0, 650, 4000, 1, 20, 10, true, true, false, 0, 0, 0}},
            {ENGINEER_T1, {ENGINEER_T1, 52, 260, 260, 10, 0, 0, 0, 5, true, true, true, 0, 0, 0}},
            {ENGINEER_T2, {ENGINEER_T2, 130, 650, 650, 20, 0, 0, 0, 12.5, true, true, true, 0, 0, 0}},

            {LAND_FACTORY_T1, {LAND_FACTORY_T1, 240, 2100, 300, 80, 0, 0, 0, 20, false, false, false, 4, 0, 0}},
            {LAND_FACTORY_HQ_T2, {LAND_FACTORY_HQ_T2, 1170, 9100, 2300, 160, 0, 0, 0, 40, false, false, false, 4, 0, 0}},

            {MASS_EXTRACTOR_T1, {MASS_EXTRACTOR_T1, 36, 360, 60, 0, 0, 2, -2, 13.01, false, false, false, 1, 0, 0}},
            {MASS_EXTRACTOR_T2, {MASS_EXTRACTOR_T2, 900, 5400, 1171, 0, 0, 6, -9, 0 /* TODO */, false, false, false, 1, 0, 0}},
            {MASS_EXTRACTOR_T3, {MASS_EXTRACTOR_T3, 4600, 31625, 0 /* TODO */, 0, 0, 18, -54, 0, false, false, false, 1, 0, 0}},

            {POWER_GENERATOR_T1, {POWER_GENERATOR_T1, 75, 750, 125, 0, 0, 0, 20, 0, false, false, false, 1, 0, 0.0625}},
            {HYDRO_POWER_PLANT, {HYDRO_POWER_PLANT, 160, 800, 400, 0, 0, 0, 100, 0, false, false, false, 3, 0, 0.125}},

            {MASS_STORAGE, {MASS_STORAGE, 200, 1500, 250, 500, 0, 0, 0, 0, false, false, false, 1, 0.125, 0}},
            {ENERGY_STORAGE, {ENERGY_STORAGE, 250, 1200, 200, 0, 5000, 0, 0, 0, false, false, false, 1, 0.125, 0}},
        },
    },
};

const FactionMap<BlueprintMap> BLUEPRINTS = {
    {
        Faction::AEON,
        {
            {
                ACU,
                {
                    LAND_FACTORY_T1,
                    MASS_EXTRACTOR_T1,
                    POWER_GENERATOR_T1,
                },
            },
            {
                ENGINEER_T1,
                {
                    LAND_FACTORY_T1,
                    MASS_EXTRACTOR_T1,
                    POWER_GENERATOR_T1,
                    HYDRO_POWER_PLANT,
                    MASS_STORAGE,
                    ENERGY_STORAGE,
                },
            },
            {
                ENGINEER_T2,
                {
                    LAND_FACTORY_T1,
                    LAND_FACTORY_HQ_T2,
                    MASS_EXTRACTOR_T1,
                    MASS_EXTRACTOR_T2,
                    POWER_GENERATOR_T1,
                    HYDRO_POWER_PLANT,
                    MASS_STORAGE,
                    ENERGY_STORAGE,
                },
            },
            {
                LAND_FACTORY_T1,
                {
                    ENGINEER_T1,
                    LAND_FACTORY_HQ_T2,
                },
            },
            {
                LAND_FACTORY_HQ_T2,
                {
                    ENGINEER_T1,
                    ENGINEER_T2,
                },
            },
        },
    },
};

}  // namespace FAF
