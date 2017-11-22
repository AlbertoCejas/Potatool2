#ifndef BASENUMERICALSPECIFICATIONMODEL_H
#define BASENUMERICALSPECIFICATIONMODEL_H

#include "source/Core/SpecificationModel.h"
#include <limits>

template<typename T>
class BaseNumericalSpecificationModel : public SpecificationModel
{
	public:

		explicit BaseNumericalSpecificationModel(T minValue, T value, T maxValue, T defaultValue)
			: minValue(minValue), value(value), maxValue(maxValue), defaultValue(defaultValue) { }
		explicit BaseNumericalSpecificationModel(T value, T defaultValue)
			: minValue(std::numeric_limits<T>::min()), value(value), maxValue(std::numeric_limits<T>::max()), defaultValue(defaultValue) { }

		inline T GetMinValue() const { return this->minValue; }
		inline void SetMinValue(T minValue) { this->minValue = minValue; }

		inline T GetValue() const { return this->value; }
		inline void SetValue(T value) { this->value = value; }

		inline T GetMaxValue() const { return this->maxValue; }
		inline void SetMaxValue(T maxValue) { this->maxValue = maxValue; }

		virtual SpecificationModel* Clone() override { return nullptr; }

	private:

		T minValue;
		T value;
		T maxValue;
		T defaultValue;

};

#endif // BASENUMERICALSPECIFICATIONMODEL_H
