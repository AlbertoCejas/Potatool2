#ifndef ENUMERATIONSPECIFICATIONMODEL_H
#define ENUMERATIONSPECIFICATIONMODEL_H

#include <QString>
#include "source/Core/SpecificationModel.h"
#include "source/Models/Specifications/Enumeration.h"

class EnumerationSpecificationModel : public SpecificationModel
{
	public:

		static const QString TYPENAME;
		static const unsigned int DEFAULT_VALUE; // Index

		explicit EnumerationSpecificationModel(unsigned int defaultValueIndex) : defaultValueIndex(defaultValueIndex) { }

		inline unsigned int GetDefaultValueIndex() const { return defaultValueIndex; }
		const char* GetDefaultValue() const;

		inline void SetDefaultValueIndex(unsigned int defaultValueIndex) { this->defaultValueIndex = defaultValueIndex; }

		SpecificationModel* Clone() override { return nullptr; }

	private:

		Enumeration enumeration;
		unsigned int defaultValueIndex;

};

#endif // ENUMERATIONSPECIFICATIONMODEL_H
