/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSubContractResourceTypeEnum.h"

// TYPE IfcSubContractResourceTypeEnum = ENUMERATION OF	(PURCHASE	,WORK	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcSubContractResourceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSubContractResourceTypeEnum> copy_self( new IfcSubContractResourceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSubContractResourceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSUBCONTRACTRESOURCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_PURCHASE:	stream << ".PURCHASE."; break;
		case ENUM_WORK:	stream << ".WORK."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSubContractResourceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PURCHASE:	return L"PURCHASE";
		case ENUM_WORK:	return L"WORK";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSubContractResourceTypeEnum> IfcSubContractResourceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSubContractResourceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSubContractResourceTypeEnum>(); }
	shared_ptr<IfcSubContractResourceTypeEnum> type_object( new IfcSubContractResourceTypeEnum() );
	if( std_iequal( arg, L".PURCHASE." ) )
	{
		type_object->m_enum = IfcSubContractResourceTypeEnum::ENUM_PURCHASE;
	}
	else if( std_iequal( arg, L".WORK." ) )
	{
		type_object->m_enum = IfcSubContractResourceTypeEnum::ENUM_WORK;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSubContractResourceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSubContractResourceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
