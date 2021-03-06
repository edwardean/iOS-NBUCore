//
//  UIViewController+NBUAdditions.h
//  NBUCore
//
//  Created by Ernesto Rivera on 2013/04/12.
//  Copyright (c) 2013 CyberAgent Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

/**
 UIViewController category for convenience methods.
 
 - Make navigationItem an IBOutlet.
 - Force orientation refresh.
 */
@interface UIViewController (NBUAdditions)

/// @name Outlets

/// Navigation item as an IB outlet.
@property(nonatomic, readonly, retain) IBOutlet UINavigationItem * navigationItem;

/// Force an orientation refresh.
- (void)refreshOrientation;

@end

