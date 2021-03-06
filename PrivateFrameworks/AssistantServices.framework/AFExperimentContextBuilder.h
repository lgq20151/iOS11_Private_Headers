/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentContextBuilder : NSObject {
    AFExperimentContext * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasExperimentsByConfigurationIdentifier : 1; 
    }  _builderFlags;
    NSDictionary * _experimentsByConfigurationIdentifier;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setExperimentsByConfigurationIdentifier:(id)arg1;

@end
