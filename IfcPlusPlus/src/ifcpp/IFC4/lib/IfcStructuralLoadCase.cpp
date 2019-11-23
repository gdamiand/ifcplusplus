/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcActionSourceTypeEnum.h"
#include "ifcpp/IFC4/include/IfcActionTypeEnum.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLoadGroupTypeEnum.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToGroup.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcStructuralAnalysisModel.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadCase.h"
#include "ifcpp/IFC4/include/IfcStructuralResultGroup.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcStructuralLoadCase 
IfcStructuralLoadCase::IfcStructuralLoadCase( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcStructuralLoadCase::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadCase> copy_self( new IfcStructuralLoadCase() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid_wstr().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcLoadGroupTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	if( m_ActionType ) { copy_self->m_ActionType = dynamic_pointer_cast<IfcActionTypeEnum>( m_ActionType->getDeepCopy(options) ); }
	if( m_ActionSource ) { copy_self->m_ActionSource = dynamic_pointer_cast<IfcActionSourceTypeEnum>( m_ActionSource->getDeepCopy(options) ); }
	if( m_Coefficient ) { copy_self->m_Coefficient = dynamic_pointer_cast<IfcRatioMeasure>( m_Coefficient->getDeepCopy(options) ); }
	if( m_Purpose ) { copy_self->m_Purpose = dynamic_pointer_cast<IfcLabel>( m_Purpose->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_SelfWeightCoefficients.size(); ++ii )
	{
		auto item_ii = m_SelfWeightCoefficients[ii];
		if( item_ii )
		{
			copy_self->m_SelfWeightCoefficients.emplace_back( dynamic_pointer_cast<IfcRatioMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcStructuralLoadCase::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTRUCTURALLOADCASE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActionType ) { m_ActionType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActionSource ) { m_ActionSource->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Coefficient ) { m_Coefficient->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Purpose ) { m_Purpose->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList( stream, m_SelfWeightCoefficients );
	stream << ");";
}
void IfcStructuralLoadCase::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStructuralLoadCase::toString() const { return L"IfcStructuralLoadCase"; }
void IfcStructuralLoadCase::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadCase, expecting 11, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_PredefinedType = IfcLoadGroupTypeEnum::createObjectFromSTEP( args[5], map );
	m_ActionType = IfcActionTypeEnum::createObjectFromSTEP( args[6], map );
	m_ActionSource = IfcActionSourceTypeEnum::createObjectFromSTEP( args[7], map );
	m_Coefficient = IfcRatioMeasure::createObjectFromSTEP( args[8], map );
	m_Purpose = IfcLabel::createObjectFromSTEP( args[9], map );
	readTypeOfRealList( args[10], m_SelfWeightCoefficients );
}
void IfcStructuralLoadCase::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcStructuralLoadGroup::getAttributes( vec_attributes );
	if( !m_SelfWeightCoefficients.empty() )
	{
		shared_ptr<AttributeObjectVector> SelfWeightCoefficients_vec_object( new AttributeObjectVector() );
		std::copy( m_SelfWeightCoefficients.begin(), m_SelfWeightCoefficients.end(), std::back_inserter( SelfWeightCoefficients_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "SelfWeightCoefficients", SelfWeightCoefficients_vec_object ) );
	}
}
void IfcStructuralLoadCase::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcStructuralLoadGroup::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralLoadCase::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralLoadGroup::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralLoadCase::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadGroup::unlinkFromInverseCounterparts();
}
