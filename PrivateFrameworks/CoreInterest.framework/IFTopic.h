/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFTopic : NSObject {
    unsigned long long  _activations;
    NSUUID * _identifier;
    NSArray * _indications;
    unsigned long long  _indirectActivations;
    NSString * _label;
    NSString * _name;
    double  _score;
    NSArray * children;
    IFTopic * parent;
}

@property (nonatomic) unsigned long long activations;
@property (nonatomic, retain) NSArray *children;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSArray *indications;
@property (nonatomic) unsigned long long indirectActivations;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) IFTopic *parent;
@property (nonatomic, readonly) IFTopic *root;
@property (nonatomic) double score;

+ (id)root;
+ (id)topicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)activations;
- (id)children;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id)identifier;
- (id)indications;
- (unsigned long long)indirectActivations;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)level;
- (id)name;
- (id)parent;
- (id)root;
- (double)score;
- (void)setActivations:(unsigned long long)arg1;
- (void)setChildren:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIndications:(id)arg1;
- (void)setIndirectActivations:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setScore:(double)arg1;

@end