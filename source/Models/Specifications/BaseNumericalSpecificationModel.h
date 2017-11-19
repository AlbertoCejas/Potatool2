#ifndef BASENUMERICALSPECIFICATIONMODEL_H
#define BASENUMERICALSPECIFICATIONMODEL_H

#include "Core/SpecificationModel.h"

template<typename T>
class BaseNumericalSpecificationModel : public SpecificationModel
{
	public:

		explicit BaseNumericalSpecificationModel(T value, T defaultValue) : value(value), defaultValue(defaultValue) { }

		inline T GetValue() const { return this->value; }
		inline void SetValue(T value) { this->value = value; }

		virtual SpecificationModel* Clone() override { return nullptr; }

	private:

		T value;
		T defaultValue;
};

#endif // BASENUMERICALSPECIFICATIONMODEL_H
