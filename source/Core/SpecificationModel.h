#ifndef SPECIFICATIONMODEL_H
#define SPECIFICATIONMODEL_H

class SpecificationModel
{
	public:

		virtual ~SpecificationModel() { }
		virtual SpecificationModel* Clone() = 0;
};

#endif // SPECIFICATIONMODEL_H
