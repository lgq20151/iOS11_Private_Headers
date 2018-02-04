/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBAutomationUtilManager : NSObject {
    NSDictionary * _automationPreferences;
    NSMutableDictionary * _blocksToRunLater;
    NSMutableDictionary * _classInformation;
    NSMutableArray * _edges;
    NSMutableArray * _incorrectClasses;
    NSMutableArray * _nodes;
    NSMutableDictionary * _notificationToPath;
    NSMutableSet * _notificationsWaitingOn;
    NSMutableDictionary * _numbTimesVisitedView;
    int  _readyForPairingProcess;
    NSArray * _removeList;
    bool  _timeoutQueued;
}

@property (retain) NSDictionary *automationPreferences;
@property (retain) NSMutableDictionary *blocksToRunLater;
@property (retain) NSMutableDictionary *classInformation;
@property (retain) NSMutableArray *edges;
@property (retain) NSMutableArray *incorrectClasses;
@property (retain) NSMutableArray *nodes;
@property (retain) NSMutableDictionary *notificationToPath;
@property (retain) NSMutableSet *notificationsWaitingOn;
@property (retain) NSMutableDictionary *numbTimesVisitedView;
@property int readyForPairingProcess;
@property (retain) NSArray *removeList;
@property bool timeoutQueued;

+ (bool)COSGenerateDocumentation;
+ (bool)PBAutomationTesting;
+ (bool)PBAutomationUseModifiedFlow;
+ (id)sharedAutomationUtilManager;
+ (id)viewFromKeyword:(id)arg1 andConnectionWeight:(double)arg2;
+ (id)viewInClass:(id)arg1 andSubClass:(id)arg2 andViewName:(id)arg3 andConnectionWeight:(double)arg4;

- (void).cxx_destruct;
- (void)addClass:(id)arg1;
- (id)automationPreferences;
- (id)blocksToRunLater;
- (void)callTimeout;
- (void)callbackReceived:(id)arg1 andAQuickFixParameter:(bool)arg2;
- (id)checkClass:(id)arg1;
- (void)checkPList;
- (id)classInformation;
- (void)cleanUpAndEndAutomationProcess;
- (void)createEdges:(id)arg1;
- (void)createNodes;
- (id)documentation;
- (id)documentationMap;
- (id)edges;
- (void)executeBlock:(id)arg1 fromViewPath:(id)arg2;
- (void)expandClassInformation;
- (id)findPathForRandomPList:(id)arg1;
- (void)generateDocumentation:(id)arg1;
- (id)getEdge:(id)arg1 andSubViewName:(id)arg2 andSpecificViewName:(id)arg3 andEndViewName:(id)arg4 andEndSubViewName:(id)arg5 andEndSpecificViewName:(id)arg6 andButtonName:(id)arg7 andWeight:(id)arg8;
- (id)getNextButton:(id)arg1 andView:(id)arg2;
- (id)getNextTextFields:(id)arg1 andView:(id)arg2;
- (id)getNode:(id)arg1 andParentName:(id)arg2 andViewName:(id)arg3 andDocumentationDescription:(id)arg4;
- (id)getNode:(id)arg1 andSubViewName:(id)arg2 andSpecificViewName:(id)arg3;
- (id)incorrectClasses;
- (id)init;
- (bool)isRemoved:(id)arg1;
- (id)nodes;
- (id)notificationToPath;
- (id)notificationsWaitingOn;
- (id)numbTimesVisitedView;
- (id)orderPList:(id)arg1;
- (id)parseNodeString:(id)arg1;
- (id)parseViewPath:(id)arg1;
- (void)postDarwinNotification:(struct __CFString { }*)arg1;
- (int)readyForPairingProcess;
- (id)removeList;
- (void)runBlock:(id /* block */)arg1 forPath:(id)arg2 andAQuickFixParameter:(bool)arg3;
- (void)seeIfReadyForThePairingProcess;
- (void)setAutomationPreferences:(id)arg1;
- (void)setBlocksToRunLater:(id)arg1;
- (void)setClassInformation:(id)arg1;
- (void)setEdges:(id)arg1;
- (void)setIncorrectClasses:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setNotificationToPath:(id)arg1;
- (void)setNotificationsWaitingOn:(id)arg1;
- (void)setNumbTimesVisitedView:(id)arg1;
- (void)setReadyForPairingProcess:(int)arg1;
- (void)setRemoveList:(id)arg1;
- (void)setTimeoutQueued:(bool)arg1;
- (void)signUpForNotifications;
- (void)storeBlockForLater:(id /* block */)arg1 forPath:(id)arg2;
- (id)subViewsTypeConvert:(id)arg1;
- (void)takeScreenshot:(id)arg1 andView:(id)arg2;
- (void)takeScreenshot:(id)arg1 andViewController:(id)arg2;
- (void)throwError;
- (bool)timeoutQueued;
- (void)updateNodeExpectedNumbClicks;
- (void)updatePList;
- (void)updatePListWithoutNotification;
- (id)viewAndActionsTypeConvert:(id)arg1;
- (bool)waitingOnNotifications:(id)arg1;

@end