## Introduction:
**SparkSync** is a research-oriented project team exploring the use of low-cost gas sensors and machine learning to assess the freshness of fruits and vegetables.

The project uses an **Arduino UNO microcontroller** connected to two gas sensors, the **MQ-2 and MQ-135**, to investigate changes in sensor responses under different produce conditions. The collected measurements will form the basis of a dataset that can be analyzed to identify patterns associated with freshness, ripening, overripening, and spoilage.

The central idea is to investigate whether patterns in gas-sensor measurements can provide useful information about the condition of produce through an affordable and accessible sensing system.

The initial development phase focuses on gas sensing, sensor calibration, and experimental data collection. Machine learning will be investigated using the collected dataset. Camera-based analysis and IoT integration are potential future extensions rather than requirements of the initial prototype.


### Project Details

| Attribute | Description |
|---|---|
| Team Name | SparkSync |
| Project Title | Smart Freshness Detection for Fruits and Vegetables |
| Project Domain | Internet of Things (IoT), Machine Learning, Food Quality Monitoring |
| Microcontroller | Arduino UNO |
| Gas Sensors | MQ-2 and MQ-135 |
| Sensor Programming | Arduino/C++ |
| Data Analysis | Python (planned/under development) |
| Data Storage Format | CSV |
| Primary Objective | Investigate gas-sensor-based freshness-stage classification |
| Development Approach | Experimental prototyping and data-driven analysis |

---


## Background and Motivation

Fresh fruits and vegetables undergo physical, chemical, and biological changes as they ripen and eventually deteriorate. These changes can affect their aroma, texture, appearance, and overall quality.

During ripening and spoilage, produce may release or change the concentrations of volatile compounds in its surrounding environment. Gas sensors respond to certain gases and vapours, making them potential tools for investigating these changes.

However, sensor responses are not necessarily specific to one compound or one freshness stage. Temperature, humidity, sensor warm-up, sensor ageing, sample placement, and the surrounding environment can also influence measurements.

This creates an opportunity to investigate whether patterns across multiple gas sensors, combined with systematic experimentation and machine learning, can help distinguish different freshness stages.

SparkSync explores this opportunity using relatively inexpensive hardware and a repeatable experimental workflow.

###Motivation

The project is motivated by the following objectives:

- Explore a potentially affordable alternative to freshness-assessment systems that require specialized equipment.

- Investigate the relationship between gas-sensor responses and the condition of fruits and vegetables.

- Study how multiple sensor measurements can be used for data-driven classification.

- Develop a prototype that can be reproduced and improved using accessible hardware.

- Establish a foundation for future integration with IoT monitoring or additional sensing methods.

The project is experimental. Its usefulness will depend on the quality of the collected dataset, the repeatability of the experiments, and the performance of the evaluated models.
