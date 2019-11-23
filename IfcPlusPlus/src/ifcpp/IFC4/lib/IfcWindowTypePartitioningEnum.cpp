/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcWindowTypePartitioningEnum.h"

// TYPE IfcWindowTypePartitioningEnum = ENUMERATION OF	(SINGLE_PANEL	,DOUBLE_PANEL_VERTICAL	,DOUBLE_PANEL_HORIZONTAL	,TRIPLE_PANEL_VERTICAL	,TRIPLE_PANEL_BOTTOM	,TRIPLE_PANEL_TOP	,TRIPLE_PANEL_LEFT	,TRIPLE_PANEL_RIGHT	,TRIPLE_PANEL_HORIZONTAL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcWindowTypePartitioningEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcWindowTypePartitioningEnum> copy_self( new IfcWindowTypePartitioningEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcWindowTypePartitioningEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWINDOWTYPEPARTITIONINGENUM("; }
	switch( m_enum )
	{
		case ENUM_SINGLE_PANEL:	stream << ".SINGLE_PANEL."; break;
		case ENUM_DOUBLE_PANEL_VERTICAL:	stream << ".DOUBLE_PANEL_VERTICAL."; break;
		case ENUM_DOUBLE_PANEL_HORIZONTAL:	stream << ".DOUBLE_PANEL_HORIZONTAL."; break;
		case ENUM_TRIPLE_PANEL_VERTICAL:	stream << ".TRIPLE_PANEL_VERTICAL."; break;
		case ENUM_TRIPLE_PANEL_BOTTOM:	stream << ".TRIPLE_PANEL_BOTTOM."; break;
		case ENUM_TRIPLE_PANEL_TOP:	stream << ".TRIPLE_PANEL_TOP."; break;
		case ENUM_TRIPLE_PANEL_LEFT:	stream << ".TRIPLE_PANEL_LEFT."; break;
		case ENUM_TRIPLE_PANEL_RIGHT:	stream << ".TRIPLE_PANEL_RIGHT."; break;
		case ENUM_TRIPLE_PANEL_HORIZONTAL:	stream << ".TRIPLE_PANEL_HORIZONTAL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcWindowTypePartitioningEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_SINGLE_PANEL:	return L"SINGLE_PANEL";
		case ENUM_DOUBLE_PANEL_VERTICAL:	return L"DOUBLE_PANEL_VERTICAL";
		case ENUM_DOUBLE_PANEL_HORIZONTAL:	return L"DOUBLE_PANEL_HORIZONTAL";
		case ENUM_TRIPLE_PANEL_VERTICAL:	return L"TRIPLE_PANEL_VERTICAL";
		case ENUM_TRIPLE_PANEL_BOTTOM:	return L"TRIPLE_PANEL_BOTTOM";
		case ENUM_TRIPLE_PANEL_TOP:	return L"TRIPLE_PANEL_TOP";
		case ENUM_TRIPLE_PANEL_LEFT:	return L"TRIPLE_PANEL_LEFT";
		case ENUM_TRIPLE_PANEL_RIGHT:	return L"TRIPLE_PANEL_RIGHT";
		case ENUM_TRIPLE_PANEL_HORIZONTAL:	return L"TRIPLE_PANEL_HORIZONTAL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcWindowTypePartitioningEnum> IfcWindowTypePartitioningEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWindowTypePartitioningEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWindowTypePartitioningEnum>(); }
	shared_ptr<IfcWindowTypePartitioningEnum> type_object( new IfcWindowTypePartitioningEnum() );
	if( std_iequal( arg, L".SINGLE_PANEL." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_SINGLE_PANEL;
	}
	else if( std_iequal( arg, L".DOUBLE_PANEL_VERTICAL." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_DOUBLE_PANEL_VERTICAL;
	}
	else if( std_iequal( arg, L".DOUBLE_PANEL_HORIZONTAL." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_DOUBLE_PANEL_HORIZONTAL;
	}
	else if( std_iequal( arg, L".TRIPLE_PANEL_VERTICAL." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_TRIPLE_PANEL_VERTICAL;
	}
	else if( std_iequal( arg, L".TRIPLE_PANEL_BOTTOM." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_TRIPLE_PANEL_BOTTOM;
	}
	else if( std_iequal( arg, L".TRIPLE_PANEL_TOP." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_TRIPLE_PANEL_TOP;
	}
	else if( std_iequal( arg, L".TRIPLE_PANEL_LEFT." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_TRIPLE_PANEL_LEFT;
	}
	else if( std_iequal( arg, L".TRIPLE_PANEL_RIGHT." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_TRIPLE_PANEL_RIGHT;
	}
	else if( std_iequal( arg, L".TRIPLE_PANEL_HORIZONTAL." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_TRIPLE_PANEL_HORIZONTAL;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWindowTypePartitioningEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
