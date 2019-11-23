/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCableFittingTypeEnum.h"

// TYPE IfcCableFittingTypeEnum = ENUMERATION OF	(CONNECTOR	,ENTRY	,EXIT	,JUNCTION	,TRANSITION	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcCableFittingTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCableFittingTypeEnum> copy_self( new IfcCableFittingTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCableFittingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCABLEFITTINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONNECTOR:	stream << ".CONNECTOR."; break;
		case ENUM_ENTRY:	stream << ".ENTRY."; break;
		case ENUM_EXIT:	stream << ".EXIT."; break;
		case ENUM_JUNCTION:	stream << ".JUNCTION."; break;
		case ENUM_TRANSITION:	stream << ".TRANSITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCableFittingTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CONNECTOR:	return L"CONNECTOR";
		case ENUM_ENTRY:	return L"ENTRY";
		case ENUM_EXIT:	return L"EXIT";
		case ENUM_JUNCTION:	return L"JUNCTION";
		case ENUM_TRANSITION:	return L"TRANSITION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCableFittingTypeEnum> IfcCableFittingTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCableFittingTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCableFittingTypeEnum>(); }
	shared_ptr<IfcCableFittingTypeEnum> type_object( new IfcCableFittingTypeEnum() );
	if( std_iequal( arg, L".CONNECTOR." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_CONNECTOR;
	}
	else if( std_iequal( arg, L".ENTRY." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_ENTRY;
	}
	else if( std_iequal( arg, L".EXIT." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_EXIT;
	}
	else if( std_iequal( arg, L".JUNCTION." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_JUNCTION;
	}
	else if( std_iequal( arg, L".TRANSITION." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_TRANSITION;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
