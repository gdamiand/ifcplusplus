/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSwitchingDeviceTypeEnum.h"

// TYPE IfcSwitchingDeviceTypeEnum = ENUMERATION OF	(CONTACTOR	,DIMMERSWITCH	,EMERGENCYSTOP	,KEYPAD	,MOMENTARYSWITCH	,SELECTORSWITCH	,STARTER	,SWITCHDISCONNECTOR	,TOGGLESWITCH	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcSwitchingDeviceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSwitchingDeviceTypeEnum> copy_self( new IfcSwitchingDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSwitchingDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSWITCHINGDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONTACTOR:	stream << ".CONTACTOR."; break;
		case ENUM_DIMMERSWITCH:	stream << ".DIMMERSWITCH."; break;
		case ENUM_EMERGENCYSTOP:	stream << ".EMERGENCYSTOP."; break;
		case ENUM_KEYPAD:	stream << ".KEYPAD."; break;
		case ENUM_MOMENTARYSWITCH:	stream << ".MOMENTARYSWITCH."; break;
		case ENUM_SELECTORSWITCH:	stream << ".SELECTORSWITCH."; break;
		case ENUM_STARTER:	stream << ".STARTER."; break;
		case ENUM_SWITCHDISCONNECTOR:	stream << ".SWITCHDISCONNECTOR."; break;
		case ENUM_TOGGLESWITCH:	stream << ".TOGGLESWITCH."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSwitchingDeviceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CONTACTOR:	return L"CONTACTOR";
		case ENUM_DIMMERSWITCH:	return L"DIMMERSWITCH";
		case ENUM_EMERGENCYSTOP:	return L"EMERGENCYSTOP";
		case ENUM_KEYPAD:	return L"KEYPAD";
		case ENUM_MOMENTARYSWITCH:	return L"MOMENTARYSWITCH";
		case ENUM_SELECTORSWITCH:	return L"SELECTORSWITCH";
		case ENUM_STARTER:	return L"STARTER";
		case ENUM_SWITCHDISCONNECTOR:	return L"SWITCHDISCONNECTOR";
		case ENUM_TOGGLESWITCH:	return L"TOGGLESWITCH";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSwitchingDeviceTypeEnum> IfcSwitchingDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSwitchingDeviceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSwitchingDeviceTypeEnum>(); }
	shared_ptr<IfcSwitchingDeviceTypeEnum> type_object( new IfcSwitchingDeviceTypeEnum() );
	if( std_iequal( arg, L".CONTACTOR." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_CONTACTOR;
	}
	else if( std_iequal( arg, L".DIMMERSWITCH." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_DIMMERSWITCH;
	}
	else if( std_iequal( arg, L".EMERGENCYSTOP." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_EMERGENCYSTOP;
	}
	else if( std_iequal( arg, L".KEYPAD." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_KEYPAD;
	}
	else if( std_iequal( arg, L".MOMENTARYSWITCH." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_MOMENTARYSWITCH;
	}
	else if( std_iequal( arg, L".SELECTORSWITCH." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_SELECTORSWITCH;
	}
	else if( std_iequal( arg, L".STARTER." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_STARTER;
	}
	else if( std_iequal( arg, L".SWITCHDISCONNECTOR." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_SWITCHDISCONNECTOR;
	}
	else if( std_iequal( arg, L".TOGGLESWITCH." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_TOGGLESWITCH;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSwitchingDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
