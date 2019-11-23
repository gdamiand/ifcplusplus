/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcTransportElementTypeEnum.h"

// TYPE IfcTransportElementTypeEnum = ENUMERATION OF	(ELEVATOR	,ESCALATOR	,MOVINGWALKWAY	,CRANEWAY	,LIFTINGGEAR	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcTransportElementTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTransportElementTypeEnum> copy_self( new IfcTransportElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTransportElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTRANSPORTELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ELEVATOR:	stream << ".ELEVATOR."; break;
		case ENUM_ESCALATOR:	stream << ".ESCALATOR."; break;
		case ENUM_MOVINGWALKWAY:	stream << ".MOVINGWALKWAY."; break;
		case ENUM_CRANEWAY:	stream << ".CRANEWAY."; break;
		case ENUM_LIFTINGGEAR:	stream << ".LIFTINGGEAR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTransportElementTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ELEVATOR:	return L"ELEVATOR";
		case ENUM_ESCALATOR:	return L"ESCALATOR";
		case ENUM_MOVINGWALKWAY:	return L"MOVINGWALKWAY";
		case ENUM_CRANEWAY:	return L"CRANEWAY";
		case ENUM_LIFTINGGEAR:	return L"LIFTINGGEAR";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcTransportElementTypeEnum> IfcTransportElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
	shared_ptr<IfcTransportElementTypeEnum> type_object( new IfcTransportElementTypeEnum() );
	if( std_iequal( arg, L".ELEVATOR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ELEVATOR;
	}
	else if( std_iequal( arg, L".ESCALATOR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ESCALATOR;
	}
	else if( std_iequal( arg, L".MOVINGWALKWAY." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_MOVINGWALKWAY;
	}
	else if( std_iequal( arg, L".CRANEWAY." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_CRANEWAY;
	}
	else if( std_iequal( arg, L".LIFTINGGEAR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_LIFTINGGEAR;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
