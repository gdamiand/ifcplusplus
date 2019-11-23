/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSensorTypeEnum.h"

// TYPE IfcSensorTypeEnum = ENUMERATION OF	(COSENSOR	,CO2SENSOR	,CONDUCTANCESENSOR	,CONTACTSENSOR	,FIRESENSOR	,FLOWSENSOR	,FROSTSENSOR	,GASSENSOR	,HEATSENSOR	,HUMIDITYSENSOR	,IDENTIFIERSENSOR	,IONCONCENTRATIONSENSOR	,LEVELSENSOR	,LIGHTSENSOR	,MOISTURESENSOR	,MOVEMENTSENSOR	,PHSENSOR	,PRESSURESENSOR	,RADIATIONSENSOR	,RADIOACTIVITYSENSOR	,SMOKESENSOR	,SOUNDSENSOR	,TEMPERATURESENSOR	,WINDSENSOR	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcSensorTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSensorTypeEnum> copy_self( new IfcSensorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSensorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSENSORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_COSENSOR:	stream << ".COSENSOR."; break;
		case ENUM_CO2SENSOR:	stream << ".CO2SENSOR."; break;
		case ENUM_CONDUCTANCESENSOR:	stream << ".CONDUCTANCESENSOR."; break;
		case ENUM_CONTACTSENSOR:	stream << ".CONTACTSENSOR."; break;
		case ENUM_FIRESENSOR:	stream << ".FIRESENSOR."; break;
		case ENUM_FLOWSENSOR:	stream << ".FLOWSENSOR."; break;
		case ENUM_FROSTSENSOR:	stream << ".FROSTSENSOR."; break;
		case ENUM_GASSENSOR:	stream << ".GASSENSOR."; break;
		case ENUM_HEATSENSOR:	stream << ".HEATSENSOR."; break;
		case ENUM_HUMIDITYSENSOR:	stream << ".HUMIDITYSENSOR."; break;
		case ENUM_IDENTIFIERSENSOR:	stream << ".IDENTIFIERSENSOR."; break;
		case ENUM_IONCONCENTRATIONSENSOR:	stream << ".IONCONCENTRATIONSENSOR."; break;
		case ENUM_LEVELSENSOR:	stream << ".LEVELSENSOR."; break;
		case ENUM_LIGHTSENSOR:	stream << ".LIGHTSENSOR."; break;
		case ENUM_MOISTURESENSOR:	stream << ".MOISTURESENSOR."; break;
		case ENUM_MOVEMENTSENSOR:	stream << ".MOVEMENTSENSOR."; break;
		case ENUM_PHSENSOR:	stream << ".PHSENSOR."; break;
		case ENUM_PRESSURESENSOR:	stream << ".PRESSURESENSOR."; break;
		case ENUM_RADIATIONSENSOR:	stream << ".RADIATIONSENSOR."; break;
		case ENUM_RADIOACTIVITYSENSOR:	stream << ".RADIOACTIVITYSENSOR."; break;
		case ENUM_SMOKESENSOR:	stream << ".SMOKESENSOR."; break;
		case ENUM_SOUNDSENSOR:	stream << ".SOUNDSENSOR."; break;
		case ENUM_TEMPERATURESENSOR:	stream << ".TEMPERATURESENSOR."; break;
		case ENUM_WINDSENSOR:	stream << ".WINDSENSOR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSensorTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_COSENSOR:	return L"COSENSOR";
		case ENUM_CO2SENSOR:	return L"CO2SENSOR";
		case ENUM_CONDUCTANCESENSOR:	return L"CONDUCTANCESENSOR";
		case ENUM_CONTACTSENSOR:	return L"CONTACTSENSOR";
		case ENUM_FIRESENSOR:	return L"FIRESENSOR";
		case ENUM_FLOWSENSOR:	return L"FLOWSENSOR";
		case ENUM_FROSTSENSOR:	return L"FROSTSENSOR";
		case ENUM_GASSENSOR:	return L"GASSENSOR";
		case ENUM_HEATSENSOR:	return L"HEATSENSOR";
		case ENUM_HUMIDITYSENSOR:	return L"HUMIDITYSENSOR";
		case ENUM_IDENTIFIERSENSOR:	return L"IDENTIFIERSENSOR";
		case ENUM_IONCONCENTRATIONSENSOR:	return L"IONCONCENTRATIONSENSOR";
		case ENUM_LEVELSENSOR:	return L"LEVELSENSOR";
		case ENUM_LIGHTSENSOR:	return L"LIGHTSENSOR";
		case ENUM_MOISTURESENSOR:	return L"MOISTURESENSOR";
		case ENUM_MOVEMENTSENSOR:	return L"MOVEMENTSENSOR";
		case ENUM_PHSENSOR:	return L"PHSENSOR";
		case ENUM_PRESSURESENSOR:	return L"PRESSURESENSOR";
		case ENUM_RADIATIONSENSOR:	return L"RADIATIONSENSOR";
		case ENUM_RADIOACTIVITYSENSOR:	return L"RADIOACTIVITYSENSOR";
		case ENUM_SMOKESENSOR:	return L"SMOKESENSOR";
		case ENUM_SOUNDSENSOR:	return L"SOUNDSENSOR";
		case ENUM_TEMPERATURESENSOR:	return L"TEMPERATURESENSOR";
		case ENUM_WINDSENSOR:	return L"WINDSENSOR";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSensorTypeEnum> IfcSensorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSensorTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSensorTypeEnum>(); }
	shared_ptr<IfcSensorTypeEnum> type_object( new IfcSensorTypeEnum() );
	if( std_iequal( arg, L".COSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_COSENSOR;
	}
	else if( std_iequal( arg, L".CO2SENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_CO2SENSOR;
	}
	else if( std_iequal( arg, L".CONDUCTANCESENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_CONDUCTANCESENSOR;
	}
	else if( std_iequal( arg, L".CONTACTSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_CONTACTSENSOR;
	}
	else if( std_iequal( arg, L".FIRESENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_FIRESENSOR;
	}
	else if( std_iequal( arg, L".FLOWSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_FLOWSENSOR;
	}
	else if( std_iequal( arg, L".FROSTSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_FROSTSENSOR;
	}
	else if( std_iequal( arg, L".GASSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_GASSENSOR;
	}
	else if( std_iequal( arg, L".HEATSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_HEATSENSOR;
	}
	else if( std_iequal( arg, L".HUMIDITYSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_HUMIDITYSENSOR;
	}
	else if( std_iequal( arg, L".IDENTIFIERSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_IDENTIFIERSENSOR;
	}
	else if( std_iequal( arg, L".IONCONCENTRATIONSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_IONCONCENTRATIONSENSOR;
	}
	else if( std_iequal( arg, L".LEVELSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_LEVELSENSOR;
	}
	else if( std_iequal( arg, L".LIGHTSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_LIGHTSENSOR;
	}
	else if( std_iequal( arg, L".MOISTURESENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_MOISTURESENSOR;
	}
	else if( std_iequal( arg, L".MOVEMENTSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_MOVEMENTSENSOR;
	}
	else if( std_iequal( arg, L".PHSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_PHSENSOR;
	}
	else if( std_iequal( arg, L".PRESSURESENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_PRESSURESENSOR;
	}
	else if( std_iequal( arg, L".RADIATIONSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_RADIATIONSENSOR;
	}
	else if( std_iequal( arg, L".RADIOACTIVITYSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_RADIOACTIVITYSENSOR;
	}
	else if( std_iequal( arg, L".SMOKESENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_SMOKESENSOR;
	}
	else if( std_iequal( arg, L".SOUNDSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_SOUNDSENSOR;
	}
	else if( std_iequal( arg, L".TEMPERATURESENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_TEMPERATURESENSOR;
	}
	else if( std_iequal( arg, L".WINDSENSOR." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_WINDSENSOR;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSensorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
