/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFQuery : NSObject {
    NSArray * _clients;
    id /* block */  _handler;
    unsigned long long  _maxDepth;
    <IFPropagatedScoreEngine> * _propagatedScoreEngine;
    NSDate * _referenceDate;
    IFTopic * _root;
    <IFSensedScoreEngine> * _sensedScoreEngine;
    <IFTemporalScoreEngine> * _temporalScoreEngine;
    double  _timeToLive;
}

@property (nonatomic, retain) NSArray *clients;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) unsigned long long maxDepth;
@property (nonatomic, retain) <IFPropagatedScoreEngine> *propagatedScoreEngine;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic, retain) IFTopic *root;
@property (nonatomic, retain) <IFSensedScoreEngine> *sensedScoreEngine;
@property (nonatomic, retain) <IFTemporalScoreEngine> *temporalScoreEngine;
@property (nonatomic) double timeToLive;

- (void).cxx_destruct;
- (id)clients;
- (id /* block */)handler;
- (unsigned long long)maxDepth;
- (id)propagatedScoreEngine;
- (id)referenceDate;
- (id)root;
- (id)sensedScoreEngine;
- (void)setClients:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setMaxDepth:(unsigned long long)arg1;
- (void)setPropagatedScoreEngine:(id)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setRoot:(id)arg1;
- (void)setSensedScoreEngine:(id)arg1;
- (void)setTemporalScoreEngine:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (id)temporalScoreEngine;
- (double)timeToLive;

@end