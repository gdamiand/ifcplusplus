/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcTaskTypeEnum.h"

// TYPE IfcTaskTypeEnum = ENUMERATION OF	(ATTENDANCE	,CONSTRUCTION	,DEMOLITION	,DISMANTLE	,DISPOSAL	,INSTALLATION	,LOGISTIC	,MAINTENANCE	,MOVE	,OPERATION	,REMOVAL	,RENOVATION	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcTaskTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTaskTypeEnum> copy_self( new IfcTaskTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTaskTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTASKTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ATTENDANCE:	stream << ".ATTENDANCE."; break;
		case ENUM_CONSTRUCTION:	stream << ".CONSTRUCTION."; break;
		case ENUM_DEMOLITION:	stream << ".DEMOLITION."; break;
		case ENUM_DISMANTLE:	stream << ".DISMANTLE."; break;
		case ENUM_DISPOSAL:	stream << ".DISPOSAL."; break;
		case ENUM_INSTALLATION:	stream << ".INSTALLATION."; break;
		case ENUM_LOGISTIC:	stream << ".LOGISTIC."; break;
		case ENUM_MAINTENANCE:	stream << ".MAINTENANCE."; break;
		case ENUM_MOVE:	stream << ".MOVE."; break;
		case ENUM_OPERATION:	stream << ".OPERATION."; break;
		case ENUM_REMOVAL:	stream << ".REMOVAL."; break;
		case ENUM_RENOVATION:	stream << ".RENOVATION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTaskTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ATTENDANCE:	return L"ATTENDANCE";
		case ENUM_CONSTRUCTION:	return L"CONSTRUCTION";
		case ENUM_DEMOLITION:	return L"DEMOLITION";
		case ENUM_DISMANTLE:	return L"DISMANTLE";
		case ENUM_DISPOSAL:	return L"DISPOSAL";
		case ENUM_INSTALLATION:	return L"INSTALLATION";
		case ENUM_LOGISTIC:	return L"LOGISTIC";
		case ENUM_MAINTENANCE:	return L"MAINTENANCE";
		case ENUM_MOVE:	return L"MOVE";
		case ENUM_OPERATION:	return L"OPERATION";
		case ENUM_REMOVAL:	return L"REMOVAL";
		case ENUM_RENOVATION:	return L"RENOVATION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcTaskTypeEnum> IfcTaskTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTaskTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTaskTypeEnum>(); }
	shared_ptr<IfcTaskTypeEnum> type_object( new IfcTaskTypeEnum() );
	if( std_iequal( arg, L".ATTENDANCE." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_ATTENDANCE;
	}
	else if( std_iequal( arg, L".CONSTRUCTION." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_CONSTRUCTION;
	}
	else if( std_iequal( arg, L".DEMOLITION." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_DEMOLITION;
	}
	else if( std_iequal( arg, L".DISMANTLE." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_DISMANTLE;
	}
	else if( std_iequal( arg, L".DISPOSAL." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_DISPOSAL;
	}
	else if( std_iequal( arg, L".INSTALLATION." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_INSTALLATION;
	}
	else if( std_iequal( arg, L".LOGISTIC." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_LOGISTIC;
	}
	else if( std_iequal( arg, L".MAINTENANCE." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_MAINTENANCE;
	}
	else if( std_iequal( arg, L".MOVE." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_MOVE;
	}
	else if( std_iequal( arg, L".OPERATION." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_OPERATION;
	}
	else if( std_iequal( arg, L".REMOVAL." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_REMOVAL;
	}
	else if( std_iequal( arg, L".RENOVATION." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_RENOVATION;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTaskTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
