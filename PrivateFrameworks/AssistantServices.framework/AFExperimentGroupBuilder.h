/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentGroupBuilder : NSObject {
    unsigned long long  _allocation;
    AFExperimentGroup * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasAllocation : 1; 
        unsigned int hasProperties : 1; 
    }  _builderFlags;
    NSString * _identifier;
    NSDictionary * _properties;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setAllocation:(unsigned long long)arg1;
- (id)setIdentifier:(id)arg1;
- (id)setProperties:(id)arg1;

@end
