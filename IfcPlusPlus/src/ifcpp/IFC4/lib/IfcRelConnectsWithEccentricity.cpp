/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcBoundaryCondition.h"
#include "ifcpp/IFC4/include/IfcConnectionGeometry.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelConnectsWithEccentricity.h"
#include "ifcpp/IFC4/include/IfcStructuralConnection.h"
#include "ifcpp/IFC4/include/IfcStructuralConnectionCondition.h"
#include "ifcpp/IFC4/include/IfcStructuralMember.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelConnectsWithEccentricity 
IfcRelConnectsWithEccentricity::IfcRelConnectsWithEccentricity( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRelConnectsWithEccentricity::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelConnectsWithEccentricity> copy_self( new IfcRelConnectsWithEccentricity() );
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
	if( m_RelatingStructuralMember ) { copy_self->m_RelatingStructuralMember = dynamic_pointer_cast<IfcStructuralMember>( m_RelatingStructuralMember->getDeepCopy(options) ); }
	if( m_RelatedStructuralConnection ) { copy_self->m_RelatedStructuralConnection = dynamic_pointer_cast<IfcStructuralConnection>( m_RelatedStructuralConnection->getDeepCopy(options) ); }
	if( m_AppliedCondition ) { copy_self->m_AppliedCondition = dynamic_pointer_cast<IfcBoundaryCondition>( m_AppliedCondition->getDeepCopy(options) ); }
	if( m_AdditionalConditions ) { copy_self->m_AdditionalConditions = dynamic_pointer_cast<IfcStructuralConnectionCondition>( m_AdditionalConditions->getDeepCopy(options) ); }
	if( m_SupportedLength ) { copy_self->m_SupportedLength = dynamic_pointer_cast<IfcLengthMeasure>( m_SupportedLength->getDeepCopy(options) ); }
	if( m_ConditionCoordinateSystem ) { copy_self->m_ConditionCoordinateSystem = dynamic_pointer_cast<IfcAxis2Placement3D>( m_ConditionCoordinateSystem->getDeepCopy(options) ); }
	if( m_ConnectionConstraint ) { copy_self->m_ConnectionConstraint = dynamic_pointer_cast<IfcConnectionGeometry>( m_ConnectionConstraint->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelConnectsWithEccentricity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELCONNECTSWITHECCENTRICITY" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingStructuralMember ) { stream << "#" << m_RelatingStructuralMember->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_RelatedStructuralConnection ) { stream << "#" << m_RelatedStructuralConnection->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_AppliedCondition ) { stream << "#" << m_AppliedCondition->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_AdditionalConditions ) { stream << "#" << m_AdditionalConditions->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_SupportedLength ) { m_SupportedLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ConditionCoordinateSystem ) { stream << "#" << m_ConditionCoordinateSystem->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ConnectionConstraint ) { stream << "#" << m_ConnectionConstraint->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcRelConnectsWithEccentricity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelConnectsWithEccentricity::toString() const { return L"IfcRelConnectsWithEccentricity"; }
void IfcRelConnectsWithEccentricity::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelConnectsWithEccentricity, expecting 11, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_RelatingStructuralMember, map );
	readEntityReference( args[5], m_RelatedStructuralConnection, map );
	readEntityReference( args[6], m_AppliedCondition, map );
	readEntityReference( args[7], m_AdditionalConditions, map );
	m_SupportedLength = IfcLengthMeasure::createObjectFromSTEP( args[8], map );
	readEntityReference( args[9], m_ConditionCoordinateSystem, map );
	readEntityReference( args[10], m_ConnectionConstraint, map );
}
void IfcRelConnectsWithEccentricity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelConnectsStructuralMember::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ConnectionConstraint", m_ConnectionConstraint ) );
}
void IfcRelConnectsWithEccentricity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelConnectsStructuralMember::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelConnectsWithEccentricity::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnectsStructuralMember::setInverseCounterparts( ptr_self_entity );
}
void IfcRelConnectsWithEccentricity::unlinkFromInverseCounterparts()
{
	IfcRelConnectsStructuralMember::unlinkFromInverseCounterparts();
}
